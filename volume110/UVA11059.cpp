#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k = 1;
	while(cin >> n)
	{
		long long ary[20], max = 0, temp;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
		}
		for(int i = 0; i < n; i++)
		{
			temp = 1;
			for(int j = i; j < n; j++)
			{
				temp *= ary[j];
				if(temp > max)
				{
					max = temp;
				}
			}
		}		
		printf("Case #%d: The maximum product is %lld.\n\n", k++, max);
	}
	return 0;
}

