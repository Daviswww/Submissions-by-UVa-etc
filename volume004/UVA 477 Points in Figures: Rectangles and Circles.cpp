//https://uva.onlinejudge.org/external/4/477.pdf
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
	char go;
	int k = 0, Point = 1, i = 1;
	string str;
	double x1[11], y1[11], x2[11], y2[11], c1[11], c2[11], c3[11], x, y;
	while(cin >> go)
	{
		if(go == '*') 
		{
			break;
		}
		if(go == 'r')
		{
			str[i] = go;
			cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
			k++;
			i++;
		}
		if(go == 'c')
		{
			str[i] = go;
			cin >> c1[i] >> c2[i] >> c3[i];
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
				if(str[i] == 'r')
				{
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
				else
				{
					if( (((c1[i] - x) * (c1[i] - x)) + ((c2[i]-y) * (c2[i]-y))) < (c3[i] * c3[i]))
					{
						printf("Point %d is contained in figure %d\n", Point, i);
						c = false;
					}
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
