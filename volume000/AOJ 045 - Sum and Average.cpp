#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, i = 0, sum = 0;
	double con = 0;
	while(scanf("%d,%d", &n, &m) != EOF)
	{
		i++;
		sum += n * m;
		con += m;
	}
	printf("%d\n%.0lf\n", sum, con /i + 0.5);
	return 0;
} 
