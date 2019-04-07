#include <iostream>
#include <algorithm>
using namespace std;

// 大排到小 
bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int M, Q = 100000, N, A[100000];
	cin >> M;
	// 只要記要買最少個的優惠就好 
	for(int i = 0; i < M; ++i)
	{
		int temp;
		cin >> temp;
		
		if(temp < Q)
		{
			Q = temp;
		}
	}
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// 從貴的排到便宜的 
	sort(A, A + N, comp);
	
	// 拿Q個要付錢的，再拿2個不用的，重複到買完為止 
	int ans = 0;
	for(int i = 0; i < N;)
	{
		for(int j = 0; j < Q && i < N; ++j, ++i)
		{
			ans += A[i];
		}
		
		for(int j = 0; j < 2 && i < N; ++j, ++i);
	}
	
	cout << ans << endl;

    return 0;
}

