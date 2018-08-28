#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int k = 0, ip = 0;
		string s, g;
		cin >> g >> s;
		while(ip != s.size()-g.size()+1)
		{
			int to = 0, no = 0;
			for(int j = ip; j < g.size()+ip; j++)
			{
				if(s[j] == g[no++]) ++to;
				cout << to;
			}
			cout <<" ";
			if(to == g.size())++k;
			++ip;
		}
		cout << k <<endl;
	}
	return 0;
}
