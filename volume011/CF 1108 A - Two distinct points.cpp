#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		int l1, r1, l2, r2, a, b;
		
		cin >> l1 >> r1 >> l2 >> r2;
		if(l1 != r2)
		{
			printf("%d %d\n", l1, r2);
		}
		else
		{
			printf("%d %d\n", l1, l2);
		}
	}
	return 0;	
} 
