#include <iostream>
#include <cmath>
using namespace std;

int N, M, K;
int ans;

// 計算第K個人拿到n的時候總量是多少 
long long total(int n)
{
	// a = 最左邊，b = 山形的左端點，c = 最高點，d = 山形的右端點，e = 最右邊 
	long long a, b, c, d, e;
	c = K;
	b = max(1, K - n + 1);
	d = min(N + 1, K + n);
	a = 1;
	e = N + 1;
	
	long long ret = 0;
	// a ~ b = 高度為1的長方形，b ~ c = 遞增的梯形，c ~ d = 遞減的梯形(含頂點)，d ~ e = 高度為1的長方形 
	ret = (b - a) * 1 + (c - b) * (n - 1 + n - c + b) / 2 + (d - c) * (n + n - d + c + 1) / 2 + (e - d) * 1;
	return ret;
}

int bsearch(int l, int r)
{
	// 沒得找了，回傳 
	if(l >= r)
	{
		return ans;
	}
	
	// 找中間 
	int mid = (l + r) / 2;
	long long t = total(mid);
	// 總量OK，看需不需要記下來，然後找找看能不能更大 
	if(t <= M)
	{
		if(mid > ans)
		{
			ans = mid;
		}
		return bsearch(mid + 1, r);
	}
	// 總量不OK，找小一點的 
	else
	{
		return bsearch(l, mid);
	}
	
	return ans;
}

int main()
{	
	cin >> N >> M >> K;
	cout << bsearch(0, M + 1);

    return 0;
}

