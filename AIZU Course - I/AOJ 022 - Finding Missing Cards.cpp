#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int s[20] = {0}, h[20] = {0}, c[20] = {0}, d[20] = {0};
		for(int i = 0; i < n; i++)
		{
			int p;
			char k;
			cin >> k >> p;
			if(k == 'S')
			{
				s[p]++;
			}
			if(k == 'H')
			{
				h[p]++;
			}
			if(k == 'C')
			{
				c[p]++;
			}
			if(k == 'D')
			{
				d[p]++;
			}			
		}
		for(int i = 1; i <= 13; i++)
		{
			if(s[i] < 1)
			{
				printf("S %d\n", i);
			}
		}
		for(int i = 1; i <= 13; i++)
		{
			if(h[i] < 1)
			{
				printf("H %d\n", i);
			}
		}
		for(int i = 1; i <= 13; i++)
		{
			if(c[i] < 1)
			{
				printf("C %d\n", i);
			}
		}
		for(int i = 1; i <= 13; i++)
		{
			if(d[i] < 1)
			{
				printf("D %d\n", i);
			}
		}
	}
	return 0;
}
