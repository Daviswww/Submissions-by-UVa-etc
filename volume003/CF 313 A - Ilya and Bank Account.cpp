#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	// 計算刪去最後一位跟倒數第二位的數字 
	int A = N / 10, B = N / 100 * 10 + N % 10;

	// 正數，直接輸出 
	if(N >= 0)
	{
		cout << N << endl;
	} 
	// 刪去最後一位的比較大 
	else if(A > B)
	{
		cout << A << endl;
	}
	// 刪去倒數第二位的比較大 
	else
	{
		cout << B << endl;
	}

    return 0;
}

