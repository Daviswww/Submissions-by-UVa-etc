#include<bits/stdc++.h>

using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3;
	int n;
	while(cin >> n)
	{
		while(n--)
		{
			double a = 0, b = 0, c = 0, x = 0, y = 0;
			cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
			a = hypot(x2 - x1, y2 - y1);
			b = hypot(x3 - x1, y3 - y1);
			c = hypot(x3 - x2, y3 - y2);
			
			x = (((x1*x1)+(y1*y1))*(y2-y3)+((x2*x2)+(y2*y2))*(y3-y1)+((x3*x3)+(y3*y3))*(y1-y2))/(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
			y = (((x1*x1)+(y1*y1))*(x2-x3)+((x2*x2)+(y2*y2))*(x3-x1)+((x3*x3)+(y3*y3))*(x1-x2))/(y1*(x2-x3)+y2*(x3-x1)+y3*(x1-x2))/2;
			printf("%.3lf %.3lf %.3lf\n", x, y, (a*b*c) / (sqrt((a+b+c)*(b+c-a)*(a-b+c)*(a+b-c))));
		}
	}
	return 0;
}
