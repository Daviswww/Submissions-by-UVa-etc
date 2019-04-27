#include <iostream>
using namespace std;

int main()
{
	long long N, K, F, T, maxi = -1e10, joy;
	
	// 輸入 
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		// 輸入 
		cin >> F >> T;
		
		// 計算快樂值 
		joy = (T <= K ? F : F - (T - K));
		// 紀錄最大值 
		if(joy > maxi)
		{
			maxi = joy;
		}
	} 
	
	// 輸出 
	cout << maxi <<endl;

    return 0;
}

