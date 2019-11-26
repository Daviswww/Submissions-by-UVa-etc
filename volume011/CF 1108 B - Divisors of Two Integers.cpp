#include<bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int main()
{
	int n, ary[maxn] = {0}, d = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> ary[i];
		d = max(d, ary[i]);
	}
	sort(ary, ary + n);
	for(int i = n-1; i >= 1; i--)
	{
		if( d % ary[i] != 0)
		{
			printf("%d %d\n", d, ary[i]);
			break;
		}
		else if(ary[i] == ary[i-1])
		{
			printf("%d %d\n", d, ary[i]);
			break;
		}
	}
	return 0;
}
