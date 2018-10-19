#include<bits/stdc++.h>
#define swap(x, y) {int tmp; tmp = x, x = y, y = tmp;}
using namespace std;

int main()
{
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	int ary[1005], n;
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &ary[i]);
		}
		int ans = 0;
	for( int i = 0; i < n; i++)
	{
		for( int j = n-1; j > i; j--)
			{
				if(ary[j-1] > ary[j])
				{
					swap(ary[j-1], ary[j]);
					ans++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n", ans);		
	}
	return 0;
}
