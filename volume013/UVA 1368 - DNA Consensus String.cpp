#include<bits/stdc++.h>

const int maxn = 55;

using namespace std;
int comper(int, int, int, int);
int main()
{
	
	int t, m, n;
	
	cin >> t;
	
	for(int cas = 0; cas < t; cas++)
	{
		string s[maxn];
		int sum = 0;
		cin >> m >> n;
		for(int i = 0; i < m; i++)
		{
			cin >> s[i];
		}
		
		for(int i = 0; i < n; i++)
		{
			int a = 0, t = 0, g = 0, c = 0;
			for(int j = 0; j < m; j++)
			{
				switch(s[j][i])
				{
					case 'A':
						a++;
						break;
					case 'T':
						t++;
						break;
					case 'G':
						g++;
						break;
					case 'C':
						c++;
						break;
				}
				
			}
			sum += m-comper(a, t, g, c);
		}
		puts("");	
		printf("%d\n", sum);
	}
	return 0;	
} 

int comper(int a, int t, int g, int c)
{
	if(a >= t && a >= g && a >= c)
	{
		printf("A");
		return a;
	}
	else if(c > a && c >= g && c >= t)
	{
		printf("C");
		return c;
	}
	else if(g > a && g > c && g >= t)
	{
		printf("G");
		return g;
	}
	else
	{
		printf("T");
		return t;
	}	
}
