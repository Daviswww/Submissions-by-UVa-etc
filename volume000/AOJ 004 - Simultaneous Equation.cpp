#include<bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c, d, e, f;
	while(cin >> a >> b >> c >> d >> e >> f)
	{
		double x = 0, y = 0;
		x=(e*c-b*f)/(a*e-d*b);
		y=(a*f-c*d)/(a*e-d*b);
		if(x == -0) 
		{
			x = 0;
		}
		if(y == -0)
		{
			y = 0;
		} 
		printf("%.3lf %.3lf\n", x, y);
	}
	return 0;
}

