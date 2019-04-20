#include <iostream>
using namespace std;

int N, A, B;

// 判斷有沒有辦法每人n塊蛋糕
bool check(int n)
{
	// 兩種都要能至少分給一個人，總盤數要大於等於人數 
	return (A >= n && B >= n && N <= (A / n + B / n));
}

// 搜尋每一盤最多幾塊蛋糕 
int bsearch(int l, int r)
{
	// 範圍不合法，搜尋結束 
	if(l > r)
	{
		return 0;
	}
	
	// 搜尋mid 
	int mid = (l + r) / 2, ret;
	// 每盤mid塊可以
	if(check(mid))
	{
		// 往大的找 
		ret = bsearch(mid + 1, r);
		// 回傳比較大的 
		return (mid > ret ? mid : ret);
	}
	// 不可以 
	else
	{
		// 往小的找 
		return bsearch(l, mid - 1);
	}
	
	return 0;
}

int main()
{	
	cin >> N >> A >> B; 
	
	// 每個人至少1塊，最多100	
	cout << bsearch(1, 100) << endl;

    return 0;
}

