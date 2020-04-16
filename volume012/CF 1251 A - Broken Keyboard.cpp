#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	string S;
	cin >> T;
	
	for(int t = 0; t < T; ++t)
	{
		cin >> S;
		
		bool ch[26];
		for(int i = 0; i < 26; ++i)
		{
			ch[i] = false;
		}
		
		int l = 0, r = 0;
		while(l != S.length())
		{
			if(l == r)
			{
				++r;
			}
			else if(r == S.length())
			{
				if((r - l) % 2 != 0)
				{
					ch[S[l] - 'a'] = true;
				}
				
				l = S.length();
			}
			else if(S[r] != S[l])
			{
				if((r - l) % 2 != 0)
				{
					ch[S[l] - 'a'] = true;
				}
				
				l = r;
				++r;
			}
			else
			{
				++r;
			}
		}
		
		for(int i = 0; i < 26; ++i)
		{
			if(ch[i])
			{
				cout << (char)('a' + i);
			}
		}
		cout << endl;
	}

    return 0;
}

