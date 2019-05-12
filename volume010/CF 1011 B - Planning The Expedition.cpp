#include <iostream>
#include <algorithm>
using namespace std;

// 定義陣列最大尺寸 
#define AMAX (int)(1e2 + 7)

int N, M, A, c[AMAX], ans;

// 檢查能不能吃d天 
bool check(int d)
{
	// 0天不用檢查，一定行 
	if(d == 0)
	{
		return true;
	}
	
	// 要給N個人吃 
	int t = N;
	for(int i = 0; i < AMAX; ++i)
	{
		// 計算第i種食物能給幾個人吃，扣掉該數量 
		t -= c[i] / d;
	}
	
	// 夠不夠吃 
	return (t <= 0);
}

// 二分搜尋法 
void bsearch(int l, int r)
{
	// 沒得找了，結束 
	if(l > r)
	{
		return;
	}
	
	// 找中間值 
	int mid = (l + r) / 2;
	// 可以 
	if(check(mid))
	{
		// 紀錄最大值 
		if(mid > ans)
		{
			ans = mid;
		}
		
		// 往大的找 
		bsearch(mid + 1, r);
	}
	// 不行 
	else
	{
		// 往小的找 
		bsearch(l, mid - 1);
	}
}

int main()
{	
	// 輸入 
	cin >> N >> M;
	fill(c, c + N, 0);
	
	// 順便記錄次數 
	for(int i = 0; i < M; ++i)
	{
		cin >> A;
		++c[A];
	}
	
	// 搜尋 
	ans = 0;
	bsearch(0, M);
	
	// 輸出 
	cout << ans << endl;

    return 0;
}

