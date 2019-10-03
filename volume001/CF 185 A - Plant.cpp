#include <iostream>
using namespace std;

int main()
{
	long long N, ans, n2 = 2, r = 1, d = 1e9 + 7;
	
	cin >> N;
	while(N != 0)
	{
		if(N % 2 != 0)
		{
			r = r * n2 % d;
		}
		
		N /= 2;
		n2 = n2 * n2 % d;
	}
	
	ans = ((r + 1) * r / 2) % d;
	cout << ans << endl;

	return 0;
}

