/*
https://uva.onlinejudge.org/external/1/100.pdf
input
1 10
100 200
201 210
900 1000
output
1 10 20
100 200 125
201 210 89
900 1000 174
*/
#include<bits/stdc++.h>
#define swap(a, b) {int c; c = a, a = b, b = c;}
using namespace std;

int main()
{
	int x, y;
	//ofstream fout;
	//fout.open("OutputFile.txt");
	while(cin >> x >> y)
	{
		int max = 0, maxn, g, c;
		if(x > y)
		{
			g = y, c = x;
		}
		else
		{
			g = x, c = y;
		}
		for(int i = g; i <= c; i++)
		{
			int n = i, k = 0;
			while(n != 1)
			{
				if(n % 2 != 0)
				{
					n = 3 * n + 1;
				}
				else
				{
					n = n / 2;
				}
				k++;
			}
			if(k > max)
			{
				swap(max, k);
			}
		}
		printf("%d %d %d\n", x, y, max+1);
		//fout << x <<" "<< y << " "<< max+1 << endl;
	}
	return 0;
} 
