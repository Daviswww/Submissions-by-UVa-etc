#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int h = 1; h <= n; h++)
	{
		int k, high = 0, low = 0, ary[55], temp = 0;
		cin >> k;
		printf("Case %d: ", h);
		for(int i = 0; i < k; i++)
		{
			cin >> ary[i];
		}
		for(int i = 0; i < k-1; i++)
		{
			if(ary[i] < ary[i+1])
			{
				high++;
			}
			else if(ary[i] == ary[i+1])
			{
				continue;
			}
			else
			{
				low++;
			}
		}
		printf("%d %d\n", high, low);
	}
	return 0;	
} 
