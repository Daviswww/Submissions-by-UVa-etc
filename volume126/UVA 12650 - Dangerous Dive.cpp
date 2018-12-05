#include<bits/stdc++.h>

using namespace std;
const int MAXN = 10005;
int main()
{
	int n, m;
	
	while(scanf("%d %d", &n, &m) != EOF)
	{
		bool go = true;
		int ary[MAXN] = {0};
		for(int i = 0;i < m; i++)
		{
			int tmp;
			cin >> tmp;
			ary[tmp]++;
		}
		for(int i= 1;i <= n; i++)
		{
			if(!ary[i])
			{
				printf("%d ", i);
				go = false;
			}
		}
		if(go)
		{
			printf("*");
		}
		puts("");
	}
	
	return 0;
}
