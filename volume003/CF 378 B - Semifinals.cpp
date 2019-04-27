#include <iostream>
using namespace std;

// 陣列最大長度 
#define AMAX (int)1e5 + 5

int main()
{
	int N, A[AMAX], B[AMAX], a = 0, b = 0;

	// 	輸入 
	cin >> N;	
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i] >> B[i];
	}
	
	// 計算總名次前N名到哪為止 
	while(a + b < N)
	{
		if(A[a] > B[b])
		{
			++b;
		}
		else if(A[a] < B[b])
		{
			++a;
		}
	}
	
	// 輸出第一場比賽的 
	for(int i = 0; i < N; ++i)
	{
		// 前N/2名或是總名次前N名 
		if(i < N / 2 || i < a)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	cout << endl;
	
	// 輸出第二場比賽的 
	for(int i = 0; i < N; ++i)
	{
		// 前N/2名或是總名次前N名 
		if(i < N / 2 || i < b)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}
	cout << endl;

    return 0;
}

