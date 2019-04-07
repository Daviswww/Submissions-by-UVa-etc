#include <iostream>
using namespace std;

int main()
{
	int N, S, A;
	cin >> N >> S;
	
	int sum = 0, max = 0;
	// 輸入順便加總，然後將最大值記錄起來 
	for(int i = 0; i < N; ++i)
	{
		cin >> A;
		sum += A;
		
		if(A > max)
		{
			max = A;
		}
	}
	
	// 扣掉最大值後OK的話 
	if(sum - max <= S)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

    return 0;
}

