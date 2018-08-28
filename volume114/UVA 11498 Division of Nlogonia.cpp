#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		int x, y;
		cin >> x >> y;
		for(int i = 0; i < n; i++)
		{
			int p, q;
			cin >> p >> q;
			if(p - x == 0 || q - y == 0)
			{
				cout << "divisa" << endl;
			}
			else if(p - x > 0 && q - y > 0)
			{
				cout << "NE" << endl;
			}
			else if(p - x < 0 && q - y < 0)
			{
				cout << "SO" << endl;
			}
			else if(p - x > 0 && q - y < 0)
			{
				cout << "SE" << endl;
			}
			else if(p - x < 0 && q - y > 0)
			{
				cout << "NO" << endl;
			} 
		}
	}
	return 0;
}
