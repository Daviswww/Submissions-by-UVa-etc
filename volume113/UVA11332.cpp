#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	
	while(cin >> n && n)
	{
		int sum = n, ans;
		
		while(true)
		{
			if(sum < 10)
			{
				ans = sum;
				break;
			}
			else
			{
				ans = 0;
				while(true)
				{
					if(sum == 0)
					{
						break;
					}
					else
					{
						ans += sum % 10;
						sum /= 10;						
					}
				}
				sum = ans;
			}
		}
		cout << ans << endl;
	}
	return 0;
} 
