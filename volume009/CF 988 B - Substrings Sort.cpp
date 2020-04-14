#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Str
{
	string s;
	int n;
};

bool is_substring(string a, string b)
{
	if(a.find(b) != string::npos)
	{
		return true;
	}
	return false;
}

bool comp(Str a, Str b)
{
	return a.n < b.n;
}

int main()
{
	int N;
	Str S[100];
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> S[i].s;
		S[i].n = 0;
	}
	
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			if(i != j && is_substring(S[i].s, S[j].s))
			{
				++S[i].n;
			}
		}
	}
	
	sort(S, S + N, comp);
	
	bool ans = true;
	for(int i = 0; i < N; ++i)
	{
		if(S[i].n < i)
		{
			ans = false;
			break;
		}
	}
	
	if(ans)
	{
		cout << "YES" << endl;
		for(int i = 0; i < N; ++i)
		{
			cout << S[i].s << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
