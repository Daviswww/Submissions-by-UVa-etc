#include <iostream>
using namespace std;

int main()
{
	int N, D[100], A, B, res = 0;
	
	// 輸入階級數量 
	cin >> N;
	for(int i = 0; i < N - 1; ++i)
	{
		// 輸入升級需要的年 
		cin >> D[i];
	}
	// 輸入要從A升到B 
	cin >> A >> B;
	
	// 累加需要的年 
	for(int i = A - 1; i < B - 1; ++i)
	{
		res += D[i];
	}
	
	// 輸出 
	cout << res << endl;

    return 0;
}

