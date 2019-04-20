#include <iostream>
using namespace std;

int main()
{
	int N, M, R = 0, C = 0;
	long long K;
	// 輸入 
	cin >> N >> M >> K;
	
	// 假如在最左邊那排 
	if(K < N)
	{
		R = K + 1;
		C = 1;
	}
	// 其他 
	else
	{
		// 先減N步，把起點移到(N, 2) 
		K -= N;
		
		// p是走了幾個完整的列，r是還多走了幾步 
		long long p = K / (M - 1), r = K % (M - 1);
		// 偶數個完整的列，正在往右走 
		if(p % 2 == 0)
		{
			R = N - p;
			C = 2 + r;
		}
		// 奇數個完整的列，正在往左走
		else
		{
			R = N - p;
			C = M - r;
		}
	}

	// 輸出 
	cout << R << " " << C << endl;

    return 0;
}

