#include <iostream>
#include <algorithm>
using namespace std;

// 陣列最大長度 
#define AMAX (int)1e3 + 5

int main()
{
	int N, Tower[AMAX], height = 1, count = 1, h = 1;
	
	// 輸入 
	cin >> N;
	for(int i = 0 ; i < N; ++i)
	{
		cin >> Tower[i];
	}
	
	// 排序 
	sort(Tower, Tower + N);
	
	for(int i = 1; i < N; ++i)
	{
		// 跟前面一樣就增加高度 
		if(Tower[i] == Tower[i - 1])
		{
			++h;
			// 紀錄最大值 
			if(h > height)
			{
				height = h;
			}
		}
		// 跟前面不一樣就增加數量 
		else
		{
			h = 1;
			++count;
		}
	}

	// 輸出 
	cout << height << " " << count << endl;

    return 0;
}

