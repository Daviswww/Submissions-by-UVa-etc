#include<bits/stdc++.h>

#define swap(x, y) {int tmp; tmp = x, x = y, y = tmp;}

using namespace std;

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		if(a > b)
		{
			swap(a, b);
		}
		cout << a << " " << b << endl;		
	}

	return 0;
}
