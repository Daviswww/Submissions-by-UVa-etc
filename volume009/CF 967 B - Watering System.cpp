#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long N, A, B, s[100000], S = 0;

	// 輸入	
	cin >> N >> A >> B;
	for(int i = 0; i < N; ++i)
	{		
		cin >> s[i];
		// 加總 
		S += s[i];
	}
	
	// 排序第一個以外的 
	sort(s + 1, s + N);
	
	// 從後面(大的)開始 
	int ans = 0, last = N - 1;
	// 不滿足條件就繼續 
	while(s[0] * A < S * B)
	{
		// 堵住一個現在最大的洞 
		S -= s[last--];
		// 堵住的數量加1 
		++ans;
	}
	
	// 輸出 
	cout << ans << endl;

    return 0;
}

