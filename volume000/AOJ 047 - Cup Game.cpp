#include<bits/stdc++.h>
#define swap(x, y) {int tmp; tmp = x, x = y, y = tmp;}
using namespace std;

int main()
{
	int ary[100];
	char x, y, op;
	ary['A'] = 1;
	ary['B'] = 0;
	ary['C'] = 0;
	
	while(cin >> x >> op >> y)
	{
		swap(ary[x], ary[y]);
		//printf("%c = %d %c = %d\n", x, ary[x], y, ary[y]);
	}
	if(ary['A'] == 1)
	{
		printf("A\n");	
	}
	else if(ary['B'] == 1)
	{
		printf("B\n");	
	}
	else
	{
		printf("C\n");	
	} 
	return 0;
} 
