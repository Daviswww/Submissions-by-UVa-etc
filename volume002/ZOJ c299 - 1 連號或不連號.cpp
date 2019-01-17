#include<bits/stdc++.h>

using namespace std;
const int maxn = 1005;
int main()
{
	int n;
	while(cin >> n)
	{
		int tmp, ary[maxn] = {0}, b = maxn, t = 0;
		bool ok = true;
		for(int i = 0;i < n; i++)
		{
			
			scanf("%d", &tmp);
			t = max(t, tmp);
			b = min(b, tmp);
			ary[tmp]++;
		}
		
		for(int i= b;i <= t; i++)
		{
			
			if(ary[i] == 0)
			{
				ok = false;
				break;
			}
		}
		if(ok)
		{
			printf("%d %d yes\n", b, t);
		}
		else
		{
			printf("%d %d no\n", b, t);
		}
	}
	return 0;
}
