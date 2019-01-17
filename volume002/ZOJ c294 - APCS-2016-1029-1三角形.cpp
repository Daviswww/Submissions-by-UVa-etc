#include<bits/stdc++.h>

using namespace std;
int const maxn = 5;
int main()
{
	int ary[maxn];
	cin >> ary[0] >> ary[1] >> ary[2];
	sort(ary, ary+3);
	printf("%d %d %d\n", ary[0], ary[1], ary[2]);
	if(ary[0] + ary[1] <= ary[2])
	{
		printf("No\n");
	}
	else if((ary[0] * ary[0] + ary[1] * ary[1]) < (ary[2] * ary[2]))
	{
		printf("Obtuse\n");
	}
	else if((ary[0] * ary[0] + ary[1] * ary[1]) == (ary[2] * ary[2]))
	{
		printf("Right\n");
	}
	else if((ary[0] * ary[0] + ary[1] * ary[1]) > (ary[2] * ary[2]))
	{
		printf("Acute\n");
	}
	return 0;
}
