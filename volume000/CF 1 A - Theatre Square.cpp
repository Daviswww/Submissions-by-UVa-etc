#include<bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c;
	
	cin >> a >> b >> c;
	
	printf("%.0f\n", ceil(a/c)*ceil((b/c)));
	
	return 0;
} 