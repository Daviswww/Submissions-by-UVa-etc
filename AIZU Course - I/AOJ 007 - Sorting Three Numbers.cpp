#include<bits/stdc++.h>
bool MinCmp( int a, int b ) {return a < b;}
using namespace std;

int main()
{
	int ary[10];
	while(cin >> ary[0] >> ary[1] >> ary[2])
	{
		sort( ary, ary + 3, MinCmp);
		printf("%d %d %d\n", ary[0], ary[1], ary[2]);
	}
	return 0;
} 
