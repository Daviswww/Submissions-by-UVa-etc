/*
https://nanti.jisuanke.com/t/17
input
1
2
3
4
5
6
7
8
9
output
1
1
1
2
2
2
2
2
3
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double k;
	while(cin >> k)
	{
		printf("%.0lf\n", floor(sqrt(k)));
	}
	return 0;	
} 
