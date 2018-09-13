#include<bits/stdc++.h>
#define N 3.305785

using namespace std;

int main()
{
	double a, b;
	while(cin >> a >> b)
	{
		printf("%lf\n", (a * b) / N + 0.000004);
	}
	return 0;	
} 
