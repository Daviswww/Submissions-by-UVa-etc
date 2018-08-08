/*
https://nanti.jisuanke.com/t/15
input 
4
0 0 0 5
output
5
*/

#include<iostream>

using namespace std;

int main()
{
	int ary[505], n;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i ++)
		{
			cin >> ary[i];
		}
		int ans;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(ary[i] == ary[j] && i != j)
				{
					break;
				}
				if(j == n-1)
				{
					ans	= ary[i];
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
