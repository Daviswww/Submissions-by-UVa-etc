#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int sum = 100000, ans = 0;
		for(int i = 0; i < n;i++)
		{
			sum *= 1.05;
	        if (sum % 1000 != 0)
			{
	            sum += 1000 - sum % 1000;
	        }
		}
		printf("%d\n", sum);
	}
	return 0;
} 
