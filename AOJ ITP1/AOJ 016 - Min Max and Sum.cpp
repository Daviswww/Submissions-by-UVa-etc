#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, ary[10005];
	while(cin >> n)
	{
		long long sum = 0, ma = -1000005, mi = 1000005;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
			sum += ary[i];
			if(ma < ary[i])
			{
				ma = ary[i];
			}
			if(mi > ary[i])
			{
				mi = ary[i];
			}
		}
		printf("%lld %lld %lld\n", mi, ma, sum);
	}
	return 0;
}
