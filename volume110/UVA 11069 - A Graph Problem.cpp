#include<bits/stdc++.h> 

using namespace std;

int main()
{
	int n, ary[100];
	ary[1] = 1;
	ary[2] = 2;
	ary[3] = 2;
	for(int i = 4; i < 100; i++)
	{
		ary[i] = ary[i-3] + ary[i-2];
	}
	
	while(cin >> n )
	{
		printf("%d\n", ary[n]);
	}
	return 0;
}
