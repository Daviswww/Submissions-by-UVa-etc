#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int g = 1; g <= n; g++)
	{
		long long x, y, z;
		
		cin >> x >> y >> z;
		printf("Case %d: ", g);
		if( x + y > z && x + z > y && y + z > x)
		{
			if(x == y && y == z && z == x)
			{
				printf("Equilateral\n");
			}
			if((x == y &&  y != z) || (x == z &&  y != z) || (z == y &&  x != z))
			{
				printf("Isosceles\n");
			}
			if(x != y && y != z && z != x)
			{
				printf("Scalene\n");
			}
		}
		else
		{
			printf("Invalid\n");
		}
	}
	return 0;
}

