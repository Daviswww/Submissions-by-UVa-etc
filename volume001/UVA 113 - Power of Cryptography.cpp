#include<bits/stdc++.h>

using namespace std;

int main() 
{
	double q, w, e;
	while(cin >> q >> w)
	{
		e = exp(log(w)/q);
		printf("%.0lf\n", e);
	}
	return 0;
}
