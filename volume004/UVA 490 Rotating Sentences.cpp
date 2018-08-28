#include<bits/stdc++.h>
#define max(x, y) ((x) > (y) ? (x) : (y))

using namespace std;

int main()
{
	char s[105][105], c[105][105];
	int n = 0, m = 0, j;
	while(gets(s[n]))
	{
		n++;
	}
	
	memset(c, ' ', sizeof(c));
	for(int i = 0; i < n; i++)
	{
		for( j = 0; s[i][j]; j++)
		{
			c[j][n-i-1] = s[i][j];
		}
		m = max(m, j);
	}
	for(int i = 0; i < m; i++)
	{
		c[i][n] = '\0';
		puts(c[i]);	
	}
    return 0;
}
