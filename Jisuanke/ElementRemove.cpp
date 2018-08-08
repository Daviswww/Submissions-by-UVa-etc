/*
https://nanti.jisuanke.com/t/9
input
2
3 3
3
output
0
*/

#include<iostream>

using namespace std;

int main()
{
	int ary[100], n;
	
	while(cin >> n)
	{
		int de, ans = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];	
		}
		cin >> de;
		for(int i = 0; i < n; i++)
		{
			if(ary[i] == de)
			{
				ary[i] = -1; 
			}
			if(ary[i] != -1)
			{
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
