#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		n %= 4;
		if(n == 0 || n == 3)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
	return 0;
} 
