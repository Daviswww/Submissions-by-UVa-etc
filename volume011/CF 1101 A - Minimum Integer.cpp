#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int i = 0;i < n; i++)
	{
		int l, r, d, tmp = 1;
		cin >> l >> r >> d;
		if(d < l || d > r)
		{
			printf("%d\n", d);
		}
		else
		{
			tmp += floor(r / d);
			printf("%d\n", tmp * d);
		}
	}
	return 0;
} 
