#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		int k = 0, sum = a + b;
		
		while(sum != 0)
		{
			sum /= 10;
			k++;
		}
		cout << k << endl;
	}
	return 0;
}
