#include <iostream>
using namespace std;

int main()
{
  	int N, K;
  	cin >> N >> K;
  
  	long long a[2007];
  	long long b[2007];
  	long long m = 998244353;
  
  	for(int i = 1; i < 2007; ++i)
  	{
		a[i] = 0;
		b[i] = 0;  
	}
	a[1] = 2;
	b[2] = 2;
  
  	for(int i = 0; i < N - 1; ++i)
  	{
  		for(int j = K; j >= 1; --j) 
		{
    		a[j] = (a[j] + a[j - 1] + 2 * b[j]) % m;
    		b[j] = (b[j] + b[j - 2] + 2 * a[j - 1]) % m;
    	}
	}
  
	cout << (a[K] + b[K]) % m << endl;

	return 0;
}

