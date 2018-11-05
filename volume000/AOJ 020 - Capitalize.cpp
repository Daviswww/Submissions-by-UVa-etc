#include<bits/stdc++.h>

using namespace std;

int main()
{
	char ary[205];
	fgets(ary, 205, stdin);
	
	for(int i = 0; ary[i] != '\n'; i++)
	{
		if(ary[i] >= 'a' && ary[i] <= 'z')
		{
			printf("%c", ary[i] - 32);
		}
		else
		{
			printf("%c", ary[i]);
		}
	}
	puts("");
	return 0;	
} 
