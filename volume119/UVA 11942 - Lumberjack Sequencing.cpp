#include<bits/stdc++.h>

using namespace std;
const int N = 15;
int main()
{
	printf("Lumberjacks:\n");
	int n, max, go;
	int ary[N] = {0}; 
	scanf("%d", &n);
	for(int t = 0; t < n; t++)
	{
		for(int i = 0; i < 10; i++)
		{
			scanf("%d", &ary[i]);

		}
		max = 0, go = 1;
		for(int i = 0; i < 10; i++)
		{
			if(ary[i] > max)
			{
				max = ary[i];
			}
			else
			{
				go = 0;
			}			
		}
		if(!go)
		{
			max = 0, go = 1;
			for(int i = 9; i >= 0; i--)
			{
				if(ary[i] > max)
				{
					max = ary[i];
				}
				else
				{
					go = 0;
				}			
			}			
		}
		if(go)
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}
	}
	return 0 ;
} 
