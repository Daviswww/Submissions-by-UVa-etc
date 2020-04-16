#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, K, A[100007];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	sort(A, A + N);
	
	int sub = 0, now = 0;
	for(int i = 0; i < K; ++i)
	{
		if(now == N)
		{
			cout << 0 << endl;
		}
		else
		{
			while(now != N && A[now] <= sub)
			{
				++now;
			}
			
			if(now == N)
			{
				cout << 0 << endl;
			}
			else
			{
				cout << A[now] - sub << endl;
				sub += A[now] - sub;
			}
		}
	}

    return 0;
}

