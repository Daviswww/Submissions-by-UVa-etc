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
