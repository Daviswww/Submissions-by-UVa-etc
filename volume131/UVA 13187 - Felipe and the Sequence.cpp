#include<bits/stdc++.h>

using namespace std;

int main()
{
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	int n;
	long long int tmp;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		if(tmp == 0)
		{
			printf("0");
		}
		else
		{
			fprintf(fo, "%lld\n", (tmp+1)*(tmp+1)-1);
		}
	}
	return 0;
} 
