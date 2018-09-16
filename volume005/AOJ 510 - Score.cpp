#include<bits/stdc++.h>

using namespace std;

int main()
{
	int sum1, sum2;
	int x, y, z, k;
	while(cin >> x >> y >> z >> k)
	{
		sum1 = x + y + z + k;
		cin >> x >> y >> z >> k;
		sum2 = x + y + z + k;
		cout << max(sum1, sum2) << endl;
	}
	return 0;	
} 
