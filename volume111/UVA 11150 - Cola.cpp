#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	while(cin >> n)
	{
		int ans = n;
		while(n >= 3)
		{
			int t = n / 3; 
			ans += t, n %= 3, n += t;
		}
		if(n == 2)
		{
			printf("%d\n", ans+1);
		}
		else
		{
			printf("%d\n", ans);
		}
	}
	return 0;
}
 
