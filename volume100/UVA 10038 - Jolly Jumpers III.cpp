#include<cstdio>
#include<math.h>
int main()
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int k[3005] = {0}, s[3005] = {0};
		int go = 1;
		scanf("%d", &k[0]);
		
		for(int i = 1; i < n; i++)
		{
			scanf("%d", &k[i]);
			int sum = abs(k[i] - k[i - 1]);
			s[sum]++;
		}
		for (int i = 1; i < n; i++)
		{
        	if (s[i]==0)
			{
				go = 0;
				break;
			}
		}
		if(go)
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
