#include <iostream>
#include <cstring>
using namespace std;

const int P = 500000;
bool prime[P];

bool bsearch(long long T, int l, int r)
{
	if(T == 4)
	{
		return true;
	}
	
	if(T % 2 == 0)
	{
		return false;
	}
	
	long long mid = (l + r) / 2, n = mid * 2 + 3;
	
	if(n * n == T)
	{
		return prime[mid];
	}
	else if(l != r - 1)
	{
		if(n * n < T)
		{
			return bsearch(T, mid, r);
		}
		else
		{
			return bsearch(T, l, mid);
		}
	}
	
	return false;
}

int main()
{
	memset(prime, true, sizeof(prime[0]) * P);
	for(int i = 0; i < P; ++i)
	{
		for(int j = 3 * i + 3; j < P; j += 2 * i + 3)
		{
			prime[j] = false;
		}
	}
	
	int N;
	long long T;
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> T;
		cout << (bsearch(T, 0, P) ? "YES" : "NO") << endl;
	}

    return 0;
}

