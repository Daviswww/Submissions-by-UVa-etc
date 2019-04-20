#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, A[100];
	// 輸入 
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// 由小排到大，因為負的愈多賺得愈多 
	sort(A, A + N);
	
	// 把前M個負數加起來，因為不是一定要拿，所以不是負的不用加 
	int res = 0;
	for(int i = 0 ; i < M; ++i)
	{
		if(A[i] < 0)
		{
			res += A[i];
		} 
	} 
	
	// 輸出 
	cout << -res << endl;

    return 0;
}

