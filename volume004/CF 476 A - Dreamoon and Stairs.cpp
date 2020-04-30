#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	int a = N / 2 + (N % 2 == 0 ? 0 : 1), b = N;
	if(a % M == 0)
	{
		cout << a << endl;
	}
	else if(M > b)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << (a / M +1) * M << endl;
	}

    return 0;
}

