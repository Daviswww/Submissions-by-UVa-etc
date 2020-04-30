#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, A[100007], B[100007];
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	for(int i = 0; i < N; ++i)
	{
		cin >> B[i];
	}
	
	sort(A, A + N);
	sort(B, B + N);

	int ap = N - 1, bp = N - 1;
	long long as = 0, bs = 0;
	
	for(int i = 0; i < 2 * N; ++i)
	{
		if(i % 2 == 0)
		{
			if(bp == -1 || (ap != -1 && A[ap] >= B[bp]))
			{
				as += A[ap];
				--ap;
			}
			else
			{
				--bp;
			}
		}
		else
		{
			if(ap == -1 || (bp != -1 && A[ap] <= B[bp]))
			{
				bs += B[bp];
				--bp;
			}
			else
			{
				--ap;
			}
		}
	}
	
	cout << as - bs << endl;

    return 0;
}

