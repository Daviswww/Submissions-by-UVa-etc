#include <iostream>
using namespace std;

int T[100000], N, ans;

// 找寬度為n的時候有沒有滿足條件 
bool find(int n)
{
	// 寬度不是偶數不可能 
	if(n % 2 != 0)
	{
		return false;
	}
	
	// 存左邊跟右邊各自有幾個0跟1 
	int l[2], r[2];
	for(int i = 0; i < 2; ++i)
	{
		l[i] = 0;
		r[i] = 0;
	}
	
	//  左邊 
	for(int i = 0; i < n / 2; ++i)
	{
		++l[T[i] - 1];
	}
	
	// 右邊 
	for(int i = n / 2; i < n; ++i)
	{
		++r[T[i] - 1];
	}
	
	// 一邊只有0，一邊只有1就回傳OK 
	if((l[0] == n / 2 && r[1] == n / 2) || (l[1] == n / 2 && r[0] == n / 2))
	{
		return true;
	}
	
	// 往後找 
	for(int i = n + 1; i <= N; ++i)
	{
		// 移出左邊search windoe的 
		--l[T[i - n - 1] - 1];
		// 移入左邊search window的 
		++l[T[i - n / 2 - 1] - 1];
		// 移出右邊search windoe的 
		--r[T[i - n / 2 - 1] - 1];
		// 移入右邊search window的 
		++r[T[i - 1] - 1];
		
		// 一邊只有0，一邊只有1就回傳OK 
		if((l[0] == n / 2 && r[1] == n / 2) || (l[1] == n / 2 && r[0] == n / 2))
		{
			return true;
		}
	}
	
	return false;
}

// 對寬度做二分搜尋法 
void bsearch(int l, int r)
{
	// 寬度不到2不用找 
	if(r - l < 2)
	{
		return;
	}
	
	// 找中間值 
	int mid = (l + r) / 2;
	// 可以的話 
	if(find(mid))
	{
		// 看能不能更新最大值 
		if(ans < mid)
		{
			ans = mid;
		}
		
		// 找看看能不能更大 
		bsearch(mid + 1, r);
	}
	// 不能的話 
	else
	{
		// 找小一點 
		bsearch(l, mid);
	}
}

int main()
{
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> T[i];
	}
	
	// 為了確保寬度是偶數，找出比N大的，最小的2的冪次方 
	int k = 1;
	for(int i = 0; i < 32; ++i)
	{
		if(((1 << i) & N) != 0)
		{
			k = i;
		}
	}
	
	// 二分搜尋 
	ans = 0;
	bsearch(0, 1 << (k + 1));
	cout << ans << endl;

    return 0;
}

