#include<bits/stdc++.h>

using namespace std;
const int maxn = 30;
int main()
{
	int n;
	while(cin >> n)
	{
		int ary[maxn] = {0}, t = -1, b = -1;
		int t1 = 105, b1 = 105;
		for(int i = 0;i < n; i++)
		{
			cin >> ary[i];
			if(60 - ary[i] < t1 && (60 - ary[i]) > 0)
			{
				t = ary[i];
				t1 = 60 - ary[i];
			}
			if(ary[i] - 60 < b1 && ary[i] - 60>= 0)
			{
				b = ary[i];
				b1 = ary[i] - 60;
			}
		}
		sort( ary, ary + n);
		for(int i = 0; i < n-1; i++)
		{
			printf("%d ", ary[i]);
		} 
		printf("%d\n", ary[n-1]);
		if(t >= 0)
		{
			printf("%d\n", t);
		}
		else
		{
			printf("best case\n");
		}
		if(b > 0)
		{
			printf("%d\n", b);
		}
		else
		{
			printf("worst case\n");
		}	
	}
	return 0;
}
