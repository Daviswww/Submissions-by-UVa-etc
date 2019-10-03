#include <iostream>
using namespace std;

void out(int n, int x)
{
	if(n == 0)
	{
		return;
	}
	
	out(n / x, x);
	cout << n % x;
}

int main()
{
	int K;
	cin >> K;
	
	for(int i = 0; i < K - 1; ++i)
	{
		cout << i + 1;
		for(int j = 1, n; j < K - 1; ++j)
		{
			cout << " ";
			out((i + 1) * (j + 1), K);			
		}
		cout << endl;
	}

    return 0;
}

