#include<bits/stdc++.h>

using namespace std;

int main()
{
	char A[20], B[20];
	while(scanf("%s %s", A, B))
	{
		if(A[0] == '0' && B[0] == '0')
		{
			break;
		}
		else
		{
			int i, C[20] = {0}, Al = strlen(A), Bl = strlen(B), count = 0;
			for(i = 0; i < Al; i++)
			{
				C[i] += A[Al-i-1] - 48;
			}
			for(i = 0; i < Bl; i++)
			{
				C[i] += B[Bl-i-1] - 48;
			}
			for(i = 0; i < 20; i++)
			{
				if(C[i] >= 10)
				{
					C[i+1] += C[i]/10;
					C[i] %= 10;
					count++;
				}
			}
			if(count == 0)
			{
				puts("No carry operation.");
			}
			else if(count == 1)
			{
				puts("1 carry operation.");
			}
			else
			{
				printf("%d carry operations.\n", count);
			} 			
		}
	}
	return 0;
}
