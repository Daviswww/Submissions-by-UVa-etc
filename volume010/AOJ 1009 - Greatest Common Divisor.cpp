#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	
	while(cin >> a >> b)
	{
		int sum = min(a, b);
		while(sum)
		{
			if(b % sum == 0 && a % sum == 0)
			{
				break;
			}
			sum--;
		}
		printf("%d\n", sum);
	}
	return 0;	
} 
