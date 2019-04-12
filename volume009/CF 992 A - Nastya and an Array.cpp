#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, A[100000];
	
	// 輸入 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// 排序 
	sort(A, A + N);
	
	// 第一個直接判斷，順便記錄起來 
	int ans = (A[0] == 0 ? 0 : 1), pre = A[0];
	for(int i = 1; i < N; ++i)
	{
		// 跟前一個不一樣而且不是0就加一種 
		if(A[i] != pre && A[i] != 0)
		{
			++ans;
		}
		
		// 記錄前一個的數字 
		pre = A[i];
	}
	
	// 輸出 
	cout << ans << endl;

    return 0;
}

