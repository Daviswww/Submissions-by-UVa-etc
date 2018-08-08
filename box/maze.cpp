#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		if(n == 0) break;
		int a[105];
		a[0] = 0;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		double time, now = 0, r, v, e, f, x = 0;
		cin >> time;
		cin >> r >> v >> e >> f;
		for(int j = 1; j <= n; j++)
		{
			double km1 = 0, km2 = 0, y = 0;
			for(int i = 0; i < a[j]; i++)
			{	
				x++, y++;
				if(x >= r)
				{
					km1 += 1/(v - e * (x - r));
				}
				if(x < r)
				{
					km1 += 1/(v - f * (r - x));
				}
				if(y >= r)
				{
					km2 += 1/(v - e * (y - r));
				}
				if(y < r)
				{
					km2 += 1/(v - f * (r - y));
				}
				cout << x << " " << y <<" " <<a[j] <<endl;
			}
			printf("km1 = %.4lf x = %d\n", km1, x);
			printf("km2 = %.4lf\n", km2 + time);
			if(km1 < km2 + time)
			{
				now += km1;
			}
			else
			{
				now += km2 + time;
				x = 0;
			}
			printf("now = %.4lf\n", now);
		}
	}
	return 0;
}
