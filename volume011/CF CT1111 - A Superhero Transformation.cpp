#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s, t;
	bool ok = true;
	cin >> s >> t;
	if(s.size() != t.size())
	{
		ok = false;
	}
	else
	{
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i'&& s[i] != 'o'&& s[i] != 'u')
			{
				if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i'|| t[i] == 'o'|| t[i] == 'u')
				{
					ok = false;
					break;
				}
			}
			else if(t[i] != 'a' && t[i] != 'e' && t[i] != 'i'&& t[i] != 'o'&& t[i] != 'u')
			{
				if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u')
				{
					ok = false;
					break;
				}
			}
		}		
	}
	if(ok)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
