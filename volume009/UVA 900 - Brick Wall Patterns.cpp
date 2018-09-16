#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, ary[55] = {0};
	ary[1] = 1;
	ary[2] = 2;
	for(int i = 3 ;i <= 50; i++)
	{
		ary[i] = ary[i-1] + ary[i-2];
	}
	while(cin >> n && n)
	{
		printf("%d\n", ary[n]);
	}
	return 0;	
} 
