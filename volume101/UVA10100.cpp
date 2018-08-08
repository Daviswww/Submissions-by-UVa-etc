#include<iostream>
#include<ctype.h>
using namespace std;

int main(void)
{
	string lin = "";
	bool a = false, b = false;
	int tur = 1, dp[502][502];
	while(getline(cin, lin))
	{
		if(lin == "") a = true;
		string lin1[502], lin2[502];
		for(int i = 0; i < 502; i++)
		{
			for(int j = 0; j < 502; j++)
				dp[i][j] = 0;
		}
		int n = 1, m = 1;
		for(int i = 0; i < lin.size()+1; i++)
		{
			if((lin[i] >= '0' && lin[i] <= '9') || isalpha(lin[i]))
			{
				lin1[n] += lin[i];
			}
			else
			{
				if(lin1[n].size() != 0) n++;
			}
		}
		lin = "";
		getline(cin, lin);
		if(lin == "") b = true;
		for(int i = 0; i < lin.size()+1; i++)
		{
			if((lin[i] >= '0' && lin[i] <= '9') || isalpha(lin[i]))
			{
				lin2[m] += lin[i];
			}
			else
			{
				if(lin2[m].size() != 0) m++;
			}
		}
		for(int i= 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				if(lin1[i] == lin2[j])
				{
					dp[i][j] = max(dp[i][j] , dp[i-1][j-1]+1);
				}
			}
		}
		if(a || b) printf("%2d. Blank!\n", tur);
		else printf("%2d. Length of longest match: %d\n", tur, dp[n][m] - 1);
		tur++;
		a = false, b = false;
	}
}
