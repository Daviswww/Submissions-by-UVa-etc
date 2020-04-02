#include <iostream>
using namespace std;

int main()
{
	int T;
	int N, A[107];
	cin >> T;
	for(int t = 0; t < T; ++t)
	{
		int maxi = 0;
		bool ans = true;
		
		cin >> N;
		for(int i = 0; i < N; ++i)
		{
			cin >> A[i];
			if(A[i] > maxi)
			{
				maxi = A[i];
			}
		}
		
		for(int i = 0; i < N; ++i)
		{
			if((maxi - A[i]) % 2 != 0)
			{
				ans = false;
				break;
			}
		}
		
		cout << (ans ? "YES" : "NO") << endl;
	}

    return 0;
}

