#include<bits/stdc++.h>
#define min(x, y) ((x) < (y) ? (x) : (y))
using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		double ary[1005] = {0}, m = 0, sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
			m += ary[i];
		}
		m /= n;
		for(int i = 0; i < n; i++)
		{
			sum += pow(ary[i] - m, 2);
		}
		printf("%.8lf\n", sqrt(sum/n));
	}
	return 0;
}
