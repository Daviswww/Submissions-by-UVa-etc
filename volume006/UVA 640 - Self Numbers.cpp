#include<bits/stdc++.h>

using namespace std;
int self[1000005];

int main()
{
	memset (self, 0, 1000002);
	for(int i = 1; i <= 1000000; i++)
	{
		int j = i, sum = 0;
		
		if(i > 9)
		{
			while(j)
			{
				sum += j % 10;
				j /= 10;
			}
			self[i+sum] = 1;			
		}
		else
		{
			self[i+i] = 1;
		}
	}
	for(int i = 1; i <= 1000000; i++)
	{
		if(self[i] != 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
