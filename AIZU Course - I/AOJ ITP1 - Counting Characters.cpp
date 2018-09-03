#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int ary[30] = {0};
	while(getline(cin, str))
	{
		for(int i = 0; i < str.size(); i++)
		{
			if(isalpha(str[i]))
			{
				if(str[i] >= 'A' && str[i] <= 'Z')
				{
					ary[str[i] - 'A']++;
				}
				else
				{
					ary[str[i] - 'a']++;
				}	
			}
		}
	}
	for(int i = 0; i < 26; i++)
	{
		printf("%c : %d\n", i+'a', ary[i]);
	}	
	return 0;
} 
