#include<bits/stdc++.h>

using namespace std;

unsigned long long sum;

int main()
{
	int n, k;
	
	while (cin >> n >> k , n || k)
	{
		ans = 1;
		if (k > (n / 2))
		{
			k = n - k;			
		}
		for (int i = 0; i < k; i++)
		{
			ans *= (n - i);
			ans /= (1 + i);
		}
		printf("%llu\n", sum);
	}
	return 0;
}
