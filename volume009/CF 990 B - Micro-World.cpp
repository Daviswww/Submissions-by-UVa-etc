#include<bits/stdc++.h>

using namespace std;
const int maxn = 200005;
int tmp[1000005];
int main()
{
	int n, k, a[maxn];
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		//儲存細胞數 
		tmp[a[i]]++;
	}
	sort(a, a+n); 
	int ans = n;
	for(int i = 1; i < n; i++)
	{
		if(a[i] > a[i-1] && a[i] <= a[i-1] + k)
		{
			//扣除所有同樣尺寸細胞 
			ans -= tmp[a[i-1]];
			tmp[a[i-1]] = 0;
		}
	}
	cout << ans << endl;
	
	return 0;
}
