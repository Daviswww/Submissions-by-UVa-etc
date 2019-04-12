#include <iostream>
using namespace std;

int A, B, C;
int ans;

// 檢查行不行 
bool check(int t)
{
	return (A * C <= B * (C + t));
}

// 二分搜尋 
void bsearch(int l, int r)
{
	// 沒內容可搜了 
	if(l > r)
	{
		return;
	}
	
	// 搜尋點 
	int mid = (l + r) / 2;
	// 可以，再試試左邊 
	if(check(mid))
	{
		// 紀錄最小值 
		if(mid < ans)
		{
			ans = mid;
		}
		
		bsearch(l, mid - 1);
	}
	// 不可以，試試右邊 
	else
	{
		bsearch(mid + 1, r);
	}
}

int main()
{
	// 輸入 
	cin >> A >> B >> C;
	ans = (A * C / B) + 1;
	// 搜尋 
	bsearch(0, ans);
	// 輸出 
	cout << ans << endl;

    return 0;
}

