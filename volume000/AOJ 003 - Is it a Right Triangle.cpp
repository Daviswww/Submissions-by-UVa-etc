#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	while(n--)
	{
		int x, y, z;
		
		cin >> x >> y >> z;
		if(x * x + y * y == z * z || x * x + z * z == y * y || z * z + y * y == x * x)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		} 
	}
	return 0;
}
