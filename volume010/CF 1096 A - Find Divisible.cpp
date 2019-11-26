#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int t = 0; t < n; t++)
	{
		int l, r;
		scanf("%d %d", &l, &r);
		if(r == l)
		{
			printf("%d %d\n", l, l);
		}
		else
		{
			printf("%d %d\n", l, l*2);
		}
		
	}
	return 0;	
} 
