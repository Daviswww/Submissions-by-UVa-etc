#include<bits/stdc++.h>

using namespace std;

int main()
{	
	int n;
	while(cin >> n)
	{
		int i = 1;
		for(int i = 1; i <= n; i++)
		{
			int x = i;
			if ( x % 3 == 0 )
			{
				cout << " " << i;
				continue;
			}
			if ( x % 10 == 3 )
			{
				cout << " " << i;
				continue;
			}
			x /= 10;
			do
			{
				if ( x % 10 == 3 )
				{
					cout << " " << i;
					break;
				}
				x /= 10;
			}while(x);
		}
		puts("");
	}
	return 0;
}
