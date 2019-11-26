#include<bits/stdc++.h>

using namespace std;
const int maxn = 340000;
long long ary[maxn] = {0};
int main()
{	
	long long n, ans = 0;
	
	cin >> n;
	for(int i = 0;i < n; i++)
	{
		cin >> ary[i];
	}
	sort(ary, ary+n);
	for(int i = 0; i < n/2; i++)
	{
		ans += (ary[i]+ary[n-1-i])*(ary[i]+ary[n-1-i]);
	}
	cout << ans;
	
	return 0;
}
