/*
https://nanti.jisuanke.com/t/119
input
1
output
5050
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, sum = 0;
	cin >> a;
	for(int i = a; i <= 100; i++)
	{
		sum += i;
	}
	cout<<sum<<endl;

	return 0;
}

