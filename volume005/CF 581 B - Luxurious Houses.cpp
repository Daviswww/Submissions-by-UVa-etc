#include <iostream>
using namespace std;

// 定義陣列最大尺寸 
#define AMAX (int)(1e5 + 5)

int main()
{
	int N, H[AMAX], ans[AMAX], highest = 0; 
	
	// 輸入 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> H[i];
	}
	
	// 從右邊開始決定高度 
	for(int i = N - 1; i >= 0; --i)
	{
		// 假如比到目前為止的最高的建築物還低或一樣高，就加高，不然就不加 
		ans[i] = (H[i] <= highest ? highest + 1 - H[i] : 0);
		
		// 看能不能更新最高高度 
		if(H[i] > highest)
		{
			highest = H[i];
		}
	}
	
	// 輸出 
	for(int i = 0; i < N; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		cout << ans[i];
	}
	cout << endl;

    return 0;
}

