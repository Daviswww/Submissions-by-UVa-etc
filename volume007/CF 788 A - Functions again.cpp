#include <iostream>
#include <cmath>
using namespace std;

long long A[100007], b[100007], c[100007];

int main()
{
	int N;
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
		
		if(i > 0)
		{
			b[i - 1] = fabs(A[i] - A[i - 1]);
		}
	}
	
	long long max = b[0];
	for(int i = 0; i < N - 1; ++i)
	{
		if(i < 2)
		{
			c[i] = b[i];
		}
		else
		{
			c[i] = (c[i - 2] - b[i - 1] > 0) ? (c[i - 2] - b[i - 1] + b[i]) : b[i];
		}
		
		if(c[i] > max)
		{
			max = c[i];
		}
	}	
	
	cout << max << endl;

    return 0;
}

