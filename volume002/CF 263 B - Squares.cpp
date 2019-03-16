#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	int Square[50];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> Square[i];
	} 
	
	// 從小排到大 
	sort(Square, Square + N);
	
	// 從大的開始數，數K個，輸出X軸上的座標 
	// 找得到 
	if(N - K >= 0)
	{
		cout << Square[N - K] << " 0" << endl;
	}
	// 找不到 
	else
	{
		cout << -1 << endl;
	}

    return 0;
}

