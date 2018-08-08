/*
https://nanti.jisuanke.com/t/11
input
5
0 0 1 1 2
output
3
*/

#include<iostream>

using namespace std;

int main()
{
	int n, ary1[1005], ary2[1005];
	
	while(cin >> n)
	{
		for(int i = 0; i <= 1000; i++)
		{
			ary1[i] = 0;
			ary2[i] = 0;
		}
		for(int i = 0; i < n; i++)
		{
			int x, k = 0;
			cin >> x;
			if(x < 0) 
			{
				x*=-1;
				ary1[x] = 1;
			}
			else
			{
				ary2[x] = 1;
			}
		}
		int sum = 0;
		for(int i = 0; i <= 1000; i++)
		{
			sum += ary1[i];
			sum += ary2[i];
		}
		cout << sum << endl;
	}
}
