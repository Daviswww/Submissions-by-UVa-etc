#include<bits/stdc++.h>

using namespace std;

int main()
{
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	int x, y, z, ary[10005], maxn = 0;
	for(int i = 0; i < 10005; i++)
	{
		ary[i] = 0;
	}
	while(cin >> x >> y >> z)
	{
		for(int i = x; i < z; i++)
		{
			ary[i] = max(ary[i], y);
			maxn = max(maxn, z);
		}
	}
	for(int i = 1; i < maxn; i++)
	{
		if(ary[i-1] != ary[i])
		{
			//fprintf(fo,"%d %d ", i, ary[i]);
			printf("%d %d ", i, ary[i]);
		}
	}
	//fprintf(fo,"%d 0\n", maxn);
	printf("%d 0\n", maxn);
	return 0;
} 
