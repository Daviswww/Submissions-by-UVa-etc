#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	while(getline(cin ,str))
	{
		for(int i = 0;i < str.size();i++)
		{
			if(isalpha(str[i]))
			{
				if(str[i] >= 'A' && str[i] <= 'Z')
				{
					printf("%c", str[i] + 32);
				}
				else if(str[i] >= 'a' && str[i] <= 'z')
				{
					printf("%c", str[i] - 32);
				}	
			}
			else
			{
				cout << str[i];
			}
		}
		puts("");
	}
	return 0;
}
