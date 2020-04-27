#include <iostream>
using namespace std;

int N, K, D, A[200007], show[1000007];

int main()
{
	int count = 0, ans = 1e9, T;
	for(int i = 0; i < 1000007; ++i)
	{
		show[i] = 0;
	}
	
	cin >> T;
	for(int t = 0; t < T; ++t)
	{	
		cin >> N >> K >> D;
		for(int i = 0; i < N; ++i)
		{
			cin >> A[i];
		}
		
		count = 0, ans = 1e9;
		for(int i = 0; i < D; ++i)
		{
			if(show[A[i]] == 0)
			{
				++count;
			}
			
			++show[A[i]];
		}
		
		if(count < ans)
		{
			ans = count;
		}
		
		for(int i = D; i < N; ++i)
		{
			if(show[A[i]] == 0)
			{
				++count;
			}
			
			++show[A[i]];		
			--show[A[i - D]];
			
			if(show[A[i - D]] == 0)
			{
				--count;
			}
			
			if(count < ans)
			{
				ans = count;
			}
		}
		
		for(int i = N - D; i < N; ++i)
		{
			--show[A[i]];
		}
		
		cout << ans << endl;
	}
	
	return 0;
}
