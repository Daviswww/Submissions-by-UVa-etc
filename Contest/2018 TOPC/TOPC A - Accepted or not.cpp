#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string str;
		int k = 1;
		cin >> str;
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == 'n')
			{
				k = 2;
				break;
			}
			if( (str[i] == 'a' && str[i+1] == 'c') || (str[i] == 'y' && str[i+1] == 'e'&& str[i+2] == 's'))
			{
				k = 3;
			}
		}
		if(k == 1)
		{
			puts("Unknown");
		}
		else if(k == 2)
		{
			puts("No");
		}
		else if(k == 3)
		{
			puts("Yes");
		}
	}
	return 0;	
} 
