#include<bits/stdc++.h>

using namespace std;

int Collatz( long long A, long long L );

int main()
{
	long long x, y;
	int i = 1;
	while(cin >> x >> y && (x != -1 && y != -1))
	{	
		printf("Case %d: A = %d, limit = %d, number of terms = %d\n", i++, x, y, Collatz(x, y));
	}
	return 0;
}

int Collatz( long long A, long long L )
{
	if( A == 1 ) 
	{
		return 1;
	}
	else if( A % 2 == 0 ) 
	{
		return 1 + Collatz(A / 2, L);
	}
	else
	{
		if(3 * A + 1 > L ) 
		{
			return 1;
		}
		return 1 + Collatz(3*A+1,L);
	}
}
