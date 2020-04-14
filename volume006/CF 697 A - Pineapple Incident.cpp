#include <iostream>
using namespace std;

int main()
{
	int T, S, X;
	cin >> T >> S >> X;
	
	int d = X - T;
	if(d == 0 || (d > 0 && d % S == 0) || (d > 1 && (d - 1) % S == 0))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
