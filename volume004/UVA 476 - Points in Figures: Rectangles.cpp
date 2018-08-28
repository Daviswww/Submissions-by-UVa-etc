//https://uva.onlinejudge.org/external/4/476.pdf
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	char go;
	int k = 0, Point = 1, i = 1;
	double x1[11], y1[11], x2[11], y2[11], x, y;
	while(cin >> go)
	{
		if(go == '*') 
		{
			break;
		}
		else
		{
			cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
			k++;
			i++;
		}
	}
	while(cin >> x >> y)
	{
		if(x == 9999.9 && y == 9999.9)
		{
			break;
		}
		else
		{
			bool c = true;
			for(int i = 1; i <= k; i++)
			{
				bool a = false, b = false;
				if(x > x1[i] && x < x2[i])
				{
					a = true;
				}
				if(y > y2[i] && y < y1[i])
				{
					b = true;
				}
				if(a && b)
				{
					printf("Point %d is contained in figure %d\n", Point, i);
					c = false;
				}
			}
			if(c)
			{
				printf("Point %d is not contained in any figure\n", Point);
			}
			Point++;
		}
	}
	return 0;
}
