#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>

using namespace std;

const int MAX_N = 1001;//sqrt 1000000;

char s[MAX_N*MAX_N];
vector<char> vc[MAX_N+10];

int main()
{
	cin >> s;

	for(int i = 0; s[i]; i++)
	{
		vc[i/MAX_N].push_back(s[i]);
	}

	int n;
	cin >> n;
	while(n--)
	{
		char op;
		int p;
		cin >> op;
		if(op == 'I')
		{
			int i = 0;
			cin >> op >> p;
			p--;
			while(int(p - vc[i].size()) > 0)
				p -= vc[i++].size();
			vc[i].insert(vc[i].begin() + p, op);
		}
		if(op == 'Q')
		{
			int i = 0;
			cin >> p;
			p--;
			while(int(p - vc[i].size()) >= 0)
				p -= vc[i++].size();
			cout << vc[i][p] << endl;
		}
	}
	return 0;
}
