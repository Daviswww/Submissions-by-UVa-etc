/*
https://nanti.jisuanke.com/t/118
input
6 2
output
8 4 12 
3
*/

#include<iostream>

using namespace std;

int main()
{
	int x, y;
	while(cin >> x >> y)
	{
		printf("%d %d %d \n%d", x+y, x-y, x*y, x/y);
	}
	return 0;
} 
