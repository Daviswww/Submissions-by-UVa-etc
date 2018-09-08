#include <bits/stdc++.h>
#define PI 3.141592653

using namespace std;

int main()
{
	double a, b, t, m, n;
	while (cin >> a >> b >> t >> m >> n && a || b || t || m || n)
	{
		printf("%.2lf %.2lf\n", atan(b*n*1.0/(a*m)) * 180.0 / PI, sqrt(pow(a*m, 2)+pow(b*n, 2)) / t);
	}
	return 0;
}
