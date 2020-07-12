#include<bits/stdc++.h>

using namespace std;

int main()
{
	double a, b;
	while(cin >> a >> b)
	{
		int x = a, y = b;
		
		printf("%d %d %.5lf\n", x / y, x % y, a / b);
	}
	return 0;
}
