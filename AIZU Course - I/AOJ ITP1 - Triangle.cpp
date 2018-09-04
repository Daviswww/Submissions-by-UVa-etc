#include<bits/stdc++.h>
#define PI 3.14159265359
#define C ((c)/ (180 / PI))
using namespace std;

int main()
{
	double a, b, c;
	
	while(cin >> a >> b >> c)
	{
		double s = (a * b * sin(C)) / 2;
		double l = a + b + sqrt(pow(a, 2) - 2 * a * b * cos(C) + pow(b, 2));
		double h = 2 * s / a;
		printf("%.8lf\n%.8lf\n%.8lf\n", s, l, h);
	}
	return 0;
}
