#include<bits/stdc++.h>

using namespace std;

int main()
{
	int prime[2005], w = 1;
	prime[0] = 1;
	for(int i = 1; i < 2000; i++)
	{
		int g = 0;
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				g++;
			}
		}
		if(g == 2)
		{
			prime[w] = i;
			w++;
		}
	}
	for(int i = 0; i < w; i++)
	{
		cout << prime[i] << " ";
	}
	return 0;
}
