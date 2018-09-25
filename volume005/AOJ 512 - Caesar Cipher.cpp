#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	while(cin >> str)
	{
		for(int i = 0; i < str.size(); i++)
		{
			str[i] -= 3;
			if(str[i] < 'A')	
			{
				str[i] += 26;
			}
			printf("%c", str[i]);
		}
		puts("");
	} 
	return 0;
}
