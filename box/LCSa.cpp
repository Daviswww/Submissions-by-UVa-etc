#include<bits/stdc++.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	string s1, s2;
	int LCS[105][105];
	for (int i = 0; i <= 100; i++) LCS[i][0] = 0;
    for (int j = 0; j <= 100; j++) LCS[0][j] = 0;
    printf("Enter the two strings: \n");
	while(cin >> s1 >> s2)
	{
		int n1 = s1.size(), n2 = s2.size();
		for (int i = 0; i <= n1; i++) 
		{
			LCS[i][0] = 0;
		}
	    for (int j = 0; j <= n2; j++)
		{
			LCS[0][j] = 0;
		 } 
		for (int i = 1; i <= n1; i++)
		{
	        for (int j = 1; j <= n2; j++)
	        {
	            if (s1[i-1] == s2[j-1])
	            {
	            	LCS[i][j] = LCS[i-1][j-1] + 1;
				}
	            else
	            {
	            	LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);	
				}       	
			}
		}
		printf("LCS: %d\n", LCS[n1][n2]);
		if(LCS[n1][n2] == n1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;    
} 
