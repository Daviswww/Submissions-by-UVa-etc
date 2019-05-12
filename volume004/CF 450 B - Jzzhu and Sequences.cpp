#include <iostream>
using namespace std;

int main()
{
	int X, Y, N;
	
	// 輸入 
	cin >> X >> Y >> N;
	
	// 準備好循環的內容 
	int p[6] = {X, Y, Y - X, -X, -Y, X - Y};
	// 計算第N項落在循環中的第幾項 
	int ans = p[(N - 1) % 6] % (int)(1e9 + 7);
	
	// 輸出，是負數的話要加回正數 
	cout << (ans < 0 ? ans + (int)(1e9 + 7) : ans) << endl;

    return 0;
}

