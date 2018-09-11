#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c, q = 0, w = 0;
	
	while(scanf("%d,%d,%d", &a, &b, &c) != EOF)
	{
		if( (a * a + b * b) == (c * c) ) 
		{
			q++;
		}
		else if( a == b )
		{
			w++;
		}
	}
	cout << q << endl << w << endl;
	return 0;
}
