#include<bits/stdc++.h>
bool MinCmp( int a, int b ) {return a < b;}
unsigned long long sum;
using namespace std;
int main()
{
	int n;
	cin >> n;

	while(n--)
	{
		unsigned long long q, a[5], k;
		cin >> q >> a[0] >> a[1] >> a[2]; 
		while(q)
		{
			sort( a, a + 3, MinCmp);
			if(a[0] == a[1] && a[1] == a[2])
			{
				
				for(int i = 1; i <= q % 3;i++)
				{
					a[i] += 1;
				}
				a[0] += q / 3, a[1] += q / 3, a[2] += q / 3;
				q = 0;
			}
			else if(a[0] == a[1] && a[1] != a[2])
			{ 
				//max
				k = a[2] - a[0];
				if(q <= k*2)
				{
					a[0] += q / 2, a[1] += q / 2;
					if(q % 2)
					{
						a[0]++;
					}
					q = 0;
				}
				else
				{
					a[0] += k, a[1] += k;
					q -= 2*k;
				}
			}
			else
			{
				k = a[1] - a[0];
				if(q <= k)
				{
					a[0] += q;
					q = 0;
				}
				else
				{
					a[0] += k;
					q -= k;
				}
			}
		}
		sum = a[0] * a[1] * a[2];
		cout << sum << endl;
	}
	return 0;	
} 
