#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int g = 1; g <= n; g++)
	{
		int k, ary[20], min = 20000001, leader;
		cin >> k;
		for(int i = 0; i < k; i++)
		{
			cin >> ary[i];
		}
		for(int i = 0; i < k; i++)
		{
			int sum = 0;
			for(int j = 0; j < k; j++)
			{
				sum += abs(ary[i] - ary[j]);
				
			}
			if(min > sum )
			{
				min = sum;
				leader = ary[i];
			}
		}		
		printf("Case %d: %d\n", g, leader);
	}
	return 0;
}

