#include <iostream>
#include <algorithm>
using namespace std;

// ﹚竡皚程へ 
#define AMAX (int)(1e5 + 5)

int main()
{
	int N, A[AMAX];
	
	// 块 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// 逼 
	sort(A, A + N);
	
	// ⊿瞷计砞1 
	int ans = 1;
	for(int i = 0; i < N; ++i)
	{
		// 璝琌跑Θ硂计碞ボ硂计穦瞷рぃ穦瞷计1 
		if(A[i] >= ans)
		{
			++ans;
		}
	}
	
	// 块 
	cout << ans << endl;

    return 0;
}

