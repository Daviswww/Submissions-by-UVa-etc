#include <iostream>
using namespace std;

int N, M, S[100005], V, ans;

//  二分搜尋 
void bsearch(int l, int r)
{
	// 沒內容可搜了 
	if(l > r)
	{
		return;
	}
	
	// 搜尋點 
	int mid = (l + r) / 2;
	// 找到了 
	if(S[mid - 1] < V && V <= S[mid])
	{
		ans = mid;
		return;
	}
	// 在左邊 
	else if(V <= S[mid - 1])
	{
		bsearch(l, mid - 1);
	}
	// 在右邊 
	else
	{
		bsearch(mid + 1, r);
	}
}

int main()
{
	int C, T;
	
	cin >> N >> M;
	S[0] = 0;
	for(int i = 1; i <= N; ++i)
	{
		// 輸入 
		cin >> C >> T;
		// 累加 
		S[i] = S[i - 1] + C * T;
	}
	
	for(int i = 0; i < M; ++i)
	{
		// 輸入搜尋目標 
		cin >> V;
		ans = N;
		// 搜尋 
		bsearch(1, N);
		// 輸出 
		cout << ans << endl;
	}

    return 0;
}

