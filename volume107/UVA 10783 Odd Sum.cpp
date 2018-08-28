#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int k = 1; k <= n; k++)
	{
		int sum = 0, x, y;
		cin >> x >> y;
		
		for(int i = x; i <= y; i++)
		{
			if(i % 2 == 1)
			{
				sum += i;
			}
		}
		printf("Case %d: %d\n", k, sum);
	}
	return 0;
}

