#include<bits/stdc++.h>

using namespace std;

int roman['Z' + 1];

int main()
{
	for(int i = 0; i < 'Z' + 1; i++)
	{
		roman[i] = 0;
	}
	roman['I'] = 1;
	roman['V'] = 5;
	roman['X'] = 10;
	roman['L'] = 50;
	roman['C'] = 100;
	roman['D'] = 500;
	roman['M'] = 1000;
	string s;
	while(cin >> s)
	{
		int ans = 0, d1 = 0, d2 = 0;
		ans = roman[s[0]];
		for(int i = 0; i < s.size() - 1; i++)
		{
			if(roman[s[i]] == 0)
			{
				ans = 0;
				break;
			}
			if(s.size() - i >= 4)
			{
				if(s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2] == s[i+3])
				{
					ans = 0;
					break;
				}
			}
			if(s.size() % 2 && i + 1 == s.size())
			{
				ans += roman[s[i]];
				break;
			}
			if(roman[s[i]] >= roman[s[i+1]])
			{
				ans += roman[s[i+1]];
			}
			else
			{
				ans = ans - roman[s[i]] + roman[s[i+1]] - roman[s[i]];
			}
		 }
		 cout << ans << endl;
	}
	return 0;
}
