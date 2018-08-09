//https://uva.onlinejudge.org/external/5/591.pdf
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, temp = 1;
	while(cin >> n)
	{
		if(n == 0) 
		{
			break;
		}
		else
		{
			int ary[55], sum = 0, ans = 0;
			for(int i = 0; i < n; i++)
			{
				cin >> ary[i];
				sum += ary[i];
			}
			sum /= n;
			for(int i = 0; i < n; i++)
			{
				if(ary[i] > sum)
				{
					ans += ary[i] - sum;
				}
			}
			printf("Set #%d\nThe minimum number of moves is %d.\n\n", temp, ans);
			temp++;		
		}
	}
	return 0;
}
