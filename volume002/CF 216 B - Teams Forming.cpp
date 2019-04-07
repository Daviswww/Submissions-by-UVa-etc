#include <iostream>
#include <algorithm>
using namespace std;

// 大排到小 
bool comp(int a, int b)
{
	return a > b;
}

int main()
{
	int N, A[100];
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	// 從大排到小 
	sort(A, A + N, comp);
	
	// 補上所有隊友的差額 
	int ans = 0;
	for(int i = 0; i < N; i += 2)
	{
		ans += A[i] - A[i + 1];
	}
	
	cout << ans << endl;

    return 0;
}

