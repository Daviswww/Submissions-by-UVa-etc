#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a + b > c && b + c > a && a + c > b )
		{
			printf("OK\n");
		}
		else
		{
			printf("Wrong!!\n");
		}
	}
	return 0;
}
