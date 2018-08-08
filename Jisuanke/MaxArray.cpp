/*
https://nanti.jisuanke.com/t/21
input 
3
1 1 -2
output
2
*/
#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int ary[n], ans = 0, sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
		}
		ans = ary[0];
		for(int j = 0; j < n; j++)
		{
			sum += ary[j];
			if(ans < sum )
			{
				ans = sum;
			}
			else if(sum < 0) sum=0;
		}
		cout << ans << endl;
	}
	return 0;
}
