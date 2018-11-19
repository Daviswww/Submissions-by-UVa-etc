#include<bits/stdc++.h>
#define MAXN 1005
using namespace std;

int main()
{
	int n, ary[MAXN] = {0}, maxn = 0;
	
	while(cin >> n)
	{
		ary[n]++;
		maxn = max(maxn, ary[n]);
	}
	for(int i = 0; i < MAXN; i++)
	{
		if(ary[i] == maxn)
		{
			printf("%d\n", i);
		}
	}
	return 0;	
} 
