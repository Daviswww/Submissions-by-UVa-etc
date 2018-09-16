#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int rom1[5][15] = {0}, rom2[5][15] = {0}, rom3[5][15] = {0}, rom4[5][15] = {0};
		for(int i = 0; i < n; i++)
		{
			int k, m, p, q;
			cin >> k >> p >> q >> m;
			if(k == 1)
			{
				rom1[p-1][q-1] += m;
			}
			else if(k == 2)
			{
				rom2[p-1][q-1] += m;
			}
			else if(k == 3)
			{
				rom3[p-1][q-1] += m;
			}
			else if(k == 4)
			{
				rom4[p-1][q-1] += m;
			}
		}
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				printf(" %d", rom1[i][j]);
			}
			puts("");
		}
		printf("####################\n");
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				printf(" %d", rom2[i][j]);
			}
			puts("");
		}
		printf("####################\n");
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				printf(" %d", rom3[i][j]);
			}
			puts("");
		}
		printf("####################\n");
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				printf(" %d", rom4[i][j]);
			}
			puts("");
		}
	}
	return 0;
}

