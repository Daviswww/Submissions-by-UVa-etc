#include<cstdio>

const int maxn = 10005;

int main()
{
	int tmp = 1, count = 0, ary[maxn] = {0};
	for(int i = 2; i < maxn; i++)
	{
		if(tmp >= i)
		{
			ary[i] = count;
		}
		else
		{
			tmp *= 2;
			count++;
			ary[i] = count;
		}
	}
	int n, t = 1;
	while(scanf("%d", &n) != EOF)
	{
		if(n < 0)
		{
			break;
		}
		else
		{
			printf("Case %d: %d\n", t++, ary[n]);
		}
	}
	return 0;
} 
