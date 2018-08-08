/*
https://nanti.jisuanke.com/t/396
input
1 2 3 4 5 6 7 8 9 10
output
5
*/

#include<iostream>

using namespace std;

int main()
{
	int sum = 0, ary[11], ans = 0;
	
	for(int i = 0; i < 10; i++)
	{
		cin >> ary[i];
		sum += ary[i];
	}
	for(int i = 0; i < 10; i++)
	{
		if(ary[i] > sum/10)
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;	
} 
