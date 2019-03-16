#include <iostream>
using namespace std;

// 存每隻蟲的累積長度 
int A[100005];

// 二元搜尋法
// q是要找的index，l是搜尋下限，r是搜尋上限 
int bsearch(int q, int l, int r)
{
	// 只剩一格的話就是這格了，因為一定有答案 
	if(l == r - 1)
	{
		return l;
	}
	
	// 取中間的位置 
	int mid = (l + r) / 2;
	// 在中間的位置，找到了 
	if(A[mid - 1] < q && q <= A[mid])
	{
		return mid;
	}
	// 在左邊 
	else if(q <= A[mid - 1])
	{
		return bsearch(q, l, mid);
	}
	// 在右邊 
	else
	{
		return bsearch(q, mid, r);
	}
	
	return -1;
}

int main()
{
	int N;
	cin >> N;
	
	// 輸入每隻蟲的長度，然後變成累加長度 
	A[0] = 0;
	for(int i = 1; i <= N; ++i)
	{
		cin >> A[i];
		A[i] += A[i - 1];
	}
	
	// 輸入每個查詢，輸出查詢的結果 
	int M, query;
	cin >> M;
	for(int i = 0; i < M; ++i)
	{
		cin >> query;
		cout << bsearch(query, 0, N + 1) << endl;
	}

    return 0;
}

