#include<bits/stdc++.h>
#define swap(x, y) {int tmp; tmp = x, x = y, y = tmp;}
using namespace std;

int main()
{
	int ary[10];
	for(int i = 0; i < 5; i++)
	{
		cin >> ary[i];
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = i; j < 5; j++)
		{
			if(ary[i] < ary[j])
			{
				swap(ary[i], ary[j]);
			}
		}
	}
	
	for(int i = 0; i < 4; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("%d\n", ary[4]);
	return 0;
}
