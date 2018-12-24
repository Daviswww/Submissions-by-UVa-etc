#include <iostream>

using namespace std;

int main()
{
	int x, k, n;
	cin >> n >> k;
	if(k > n)
		cout << k + n << endl;
	else
	{
		int s = k;
		for(int i = 2; i < k; i++)
		{
			if(n % i == 0)
			{
				s = i;
			}
		}
		if(s == k)
			cout << 1 + k * n << endl; 
		else
			cout << s + (n / s * k) << endl; 
	}
	return 0;
}
