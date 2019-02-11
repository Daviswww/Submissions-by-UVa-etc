#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, z, a, b, c;
	int a1 = 0, b1 = 0, c1 = 0;
	cin >> x >> y >> z >> a >> b >> c;
	a1 = a - x;
	b1 = (a1 + b) - y;
	c1 = (b1 + c) - z;
	if(a1 < 0)
	{
		cout << "NO" << endl;
	}
	else
	{
		if(b1 < 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			if(c1 < 0)
			{
				cout << "NO" << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}
