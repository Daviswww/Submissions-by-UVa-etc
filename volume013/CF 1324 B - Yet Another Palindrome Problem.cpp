#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	int N, A[5007];
	int count[5007], pos[5007][2];
	for(int t = 0; t < T; ++t)
	{
		bool ans = false;
		
		cin >> N;
		
		for(int i = 1; i <= N; ++i)
		{
			count[i] = 0;
		}
		
		for(int i = 0; i < N; ++i)
		{
			cin >> A[i];
			
			++count[A[i]];
			if(count[A[i]] >= 3)
			{
				ans = true;
			}
			else
			{
				pos[A[i]][count[A[i]] - 1] = i;
				
				if(count[A[i]] == 2 && pos[A[i]][1] - pos[A[i]][0] > 1)
				{
					ans = true;
				}
			}
		}
		
		cout << (ans ? "YES" : "NO") << endl;
	}

    return 0;
}

