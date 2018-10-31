#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, ary[3005] = {0}, i;
	while(scanf("%d", &n) != EOF)
	{
		scanf("%d", &ary[0]);
		int ans[3005] = {0};
		int go = 1;
		for(i = 1; i < n; i++)
		{
			scanf("%d", &ary[i]);
			int sum = abs(ary[i] - ary[i-1]);
			if(ans[sum]++ || sum > n-1)
			{
				go = 0;
			}
		} 
		if(go == 1)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}		
	}
	return 0;	
} 
