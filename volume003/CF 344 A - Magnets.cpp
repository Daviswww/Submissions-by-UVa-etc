#include <iostream>
using namespace std;

int main()
{
	// 至少有一段 
	int N, res = 1, mag, pre;
	
	// 先輸入數量跟第一根 
	cin >> N >> pre;
	for(int i = 1; i < N; ++i)
	{
		// 輸入後續 
		cin >> mag;
		// 跟前面方向不一樣就接不起來 
		if(mag != pre)
		{
			// 加一段 
			++res;
		}
		
		// 記錄前一根的方向 
		pre = mag;
	}
	
	// 輸出 
	cout << res << endl;

    return 0;
}

