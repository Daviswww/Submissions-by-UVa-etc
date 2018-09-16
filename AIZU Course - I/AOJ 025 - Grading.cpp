#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	
	while(cin >> a >> b >> c)
	{
		if(a == -1 && b == -1 && c == -1)
		{
			break;
		}
		
		if((a == -1 || b == -1) && c == -1)
		{
			printf("F\n");
		}
		else
		{
			int sum = 0, k = 0;
			if(a >= 0)
			{
				sum += a;
			}
			if(b >= 0)
			{
				sum += b;
			}
			if(sum >= 80)
			{
				printf("A\n");
			}
			else if(sum >= 65 && sum < 80)
			{
				printf("B\n");
			}
			else if((sum >= 50 && sum < 65) || c >= 50)
			{
				printf("C\n");
			}
			else if(sum >= 30 && sum < 50)
			{
				printf("D\n");
			}
			else
			{
				printf("F\n");
			}			
		} 
	}
	return 0;
}

