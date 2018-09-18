#include<bits/stdc++.h>

using namespace std;

int main()
{
	int q, w, e, r;
	while(cin >> q >> w >> e >> r)
	{
		int i = 105, j = 105, sum = 0;
		sum += q + w + e + r;
		j = min(j, q), j = min(j, w), j = min(j, e), j = min(j, r);
		cin >> q >> w;
		sum += q + w;
		i = min(i, q), i = min(i, w);
		printf("%d\n", sum - i - j);
	}
	return 0;
}
