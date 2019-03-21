#include <iostream>
using namespace std;

// 根據初始的行數計算總行數 
int count(int v, int k)
{
	long long ret = 0, under = 1;
	while(v >= under)
	{
		ret += (v / under);
		under *= k;
	}
	
	return ret;
}

int bsearch(int target, int k, int l, int r, int ans)
{
	// 沒得找了 
	if(l >= r)
	{
		return ans;
	}
	
	// 找中間 
	int mid = (l + r) / 2, lines = count(mid, k);
	
	// 剛剛好，直接當答案回傳 
	if(lines == target)
	{
		ans = mid;
		return ans;
	}
	// 不夠，找大一點的 
	else if(lines < target)
	{
		return bsearch(target, k, mid + 1, r, ans);
	}
	// 夠了，先看要不要記下來，再找看看有沒有更小的 
	else
	{
		if(mid < ans)
		{
			ans = mid;
		}
		
		return bsearch(target, k, l, mid, ans);
	}
	
	return ans;
}

int main()
{
	int N, K;
	cin >> N >> K;
	
	cout << bsearch(N, K, 0, N + 1, N) << endl;

    return 0;
}

