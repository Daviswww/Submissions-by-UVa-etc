#include <iostream>
#include <algorithm>
using namespace std;

// 龍的結構 
struct Dragon
{
	// 打倒需要的力量 
	int X;
	// 打倒後加多少力量 
	int Y;
};

// 將龍依據打倒需要的力量(X)由小排到大的比較函式 
bool comp(Dragon a, Dragon b)
{
	return a.X < b.X; 
} 

int main()
{
	int S, N;
	Dragon D[1000];
	
	// 輸入 
	cin >> S >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> D[i].X >> D[i].Y;
	}

    // 依據打倒需要的力量(X)由小排到大排序 
	sort(D, D + N, comp);
	
	bool win = true;
	for(int i = 0; i < N; ++i)
	{
		// 打不倒 
		if(S <= D[i].X)
		{
			// 輸了 
			win = false;
			break;
		}
		
		// 打倒了，增加力量 
		S += D[i].Y;
	} 

    // 輸出 
	cout << (win ? "YES" : "NO") << endl;

    return 0;
}

