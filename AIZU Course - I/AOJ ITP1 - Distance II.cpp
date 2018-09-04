#include<bits/stdc++.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		double x[105] = {0}, y[105] = {0}, sum;
		
		for(int i = 0; i < n; i++)
		{
			cin >> x[i];
		}
		for(int i = 0; i < n; i++)
		{
			cin >> y[i];
		}
		for(int p = 1; p < 4; p++)
		{
			for(int i = 0; i < n; i++)
			{
				sum += pow(fabs(x[i] - y[i]), p);
			}
			printf("%.8lf\n", pow(sum, 1.0/p));
			sum = 0;
		}
		for(int i = 0; i < n; i++)
		{
			sum = max(sum, fabs(x[i] - y[i]));
		}
		printf("%.8lf\n", sum);
	}
	return 0;
}
