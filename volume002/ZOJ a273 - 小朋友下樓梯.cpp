#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n, k;
	while(cin >> n >> k)
	{
		if( (k == 0 && n != 0) || (k != 0 && n % k != 0))
		{
			printf("Impossib1e!\n");
		}
		else
		{
			printf("Ok!\n");
		}
	}
	return 0;
}
