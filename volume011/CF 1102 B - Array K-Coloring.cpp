#include<bits/stdc++.h>

using namespace std;
const int maxn = 5005;
int main()
{
	int n, k;
	while(cin >> n >> k)
	{
		bool ok = true;
		int ary[maxn] = {0}, art[maxn] = {0}, ark[maxn] = {0}, arg[maxn] = {0};
		
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
			ark[i] = ++art[ary[i]];
			arg[ark[i]]++;
			if(art[ary[i]] > k)
			{
				ok = false;
			}
		}
		int j = 0, g = 1;
		for(int i = 1; i <= k; i++)
		{
			if(arg[i] < 1)
			{
				while(true)
				{
					if(ark[j] == g && arg[g] > 1)
					{
						arg[g]--;
						ark[j] = i;
						if(arg[g] == 1)
						{
							g++;
							j = 0;
						}
						break;
					}
					else
					{
						j++;
					}
				}
			}
		}
		if(ok)
		{	
			printf("YES\n");
			for(int i = 0; i < n; i++)
			{
				printf("%d ", ark[i]);
			}
		}
		else
		{
			printf("NO");
		}
		puts("");		
	}
	return 0;
}
