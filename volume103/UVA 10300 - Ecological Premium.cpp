#include<bits/stdc++.h>

using namespace std;

int main() 
{
	int n;
	cin >> n;
	while(n--)
	{
		double k, x, y, z, sum = 0;
		cin >> k;
		while(k--)
		{
			cin >> x >> y >> z;
			sum += ((x / y) * z) * y;
		}
		cout << sum << endl;
	}
	return 0;
}
 
