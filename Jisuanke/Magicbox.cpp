#include <iostream>     // std::cout
#include <cstdio>
#define N 100 

using namespace std;

int main (void) {
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int box[N][N], bax[N][N] = {}, j = 0, k;
		
		k = n/2;
		box[0][k] = 1, bax[0][k] = 1;
		
		for(int i = 2; i <= n * n; i++)
		{	
			j-=1, k-=1;
			if(bax[j][k] == 1) box[j+=2][k+=1] = i;
			else if(j >= 0 && k < 0) box[j][k+=n] = i;
			else if(j < 0 && k >= 0) box[j+=n][k] = i;
			else if(j < 0 && k < 0) box[j+=2][k+=1] = i;
			else box[j][k] = i;
			bax[j][k] = 1;
		}
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++) 
			{
				printf("%3d",box[i][j]);
			}
			puts("");
		}
	}
	return 0;
}
