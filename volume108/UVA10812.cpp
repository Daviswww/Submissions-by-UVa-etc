#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		int x, y;

		cin >> x >> y;
		
		if(x < y || (x - y) % 2 == 1)
		{
			cout << "impossible" << endl;
		}
		else
		{
			printf("%d %d\n",(x - y) / 2 + y, (x - y) / 2);
		}
	}
	return 0;	
} 
