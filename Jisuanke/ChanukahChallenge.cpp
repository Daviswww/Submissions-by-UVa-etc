/*
input
3 
1 8
2 1
3 10
output
1 44
2 2 
3 65
*/
#include<iostream>

using namespace std;

int main()
{
	int x, p, n;
	
	cin >> x;
	for(int g = 0; g < x; g++)
	{
		int k = 0;
		cin >> p >> n;
		for(int i=1; i<=n; i++)
		{
			k += i;
		}
		cout << p << " " << k + n << endl;
	}
	return 0;
} 
