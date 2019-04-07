#include <iostream>
#include <algorithm>
using namespace std;

int N, X[100000], ans;

// 二分搜尋法 
void bsearch(int m, int l, int r)
{
	// 沒內容，結束 
	if(l >= r)
	{
		return;
	}
	
	// 取中間 
	int mid = (l + r) / 2;
	// 假如比中間大 
	if(m >= X[mid])
	{
		// 看能不能更新最大值 
		if(mid + 1 > ans)
		{
			ans = mid + 1;
		}
		
		// 找看看能不能更大 
		bsearch(m, mid + 1, r);
	}
	// 比中間小 
	else
	{
		// 找小一點 
		bsearch(m, l, mid);
	}
	
}

int main()
{
	int Q, M;
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> X[i];
	}

	// 從小排到大 
	sort(X, X + N);
	
	cin >> Q;
	for(int i = 0; i < Q; ++i)
	{
		// 輸入 
		cin >> M;
		ans = 0;
		// 搜尋 
		bsearch(M, 0, N);
		cout << ans << endl;
	}

    return 0;
}

