#include<bits/stdc++.h>

using namespace std;

int main()
{
	double n, top = 0, don = 1000005;
	
	while(cin >> n)
	{
		top = max(n, top);
		don = min(n, don);
	}
	printf("%.1lf\n", top - don);
	return 0;
}
