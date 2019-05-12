#include <iostream>
#include <algorithm>
using namespace std;

// 定義陣列最大尺寸 
#define AMAX (int)(1e5 + 7)

int main()
{
	int N, M, K, U[AMAX], V[AMAX], L[AMAX], mini = 2e9;
	bool s[AMAX];

	// 輸入 
	cin >> N >> M >> K;
	fill(s, s + N, false);
	
	for(int i = 0; i < M; ++i)
	{
		cin >> U[i] >> V[i] >> L[i];
	}
	for(int i = 0; i < K; ++i)
	{
		int t;
		cin >> t;
		// 紀錄有倉庫的城市 
		s[t] = true;
	}
	
	// 查找每一條道路 
	for(int i = 0; i < M; ++i)
	{
		// 假如兩端一個有倉庫一個沒有，而且比較短，就記起來 
		if((s[U[i]] ^ s[V[i]]) && L[i] < mini)
		{
			mini = L[i];
		}
	}

	// 至少有找到一條就輸出最短的，不然輸出-1 
	cout << (mini == 2e9 ? -1 : mini) << endl;

    return 0;
}

