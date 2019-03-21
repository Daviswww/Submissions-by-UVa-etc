#include <iostream>
using namespace std;

int main()
{
	int Q;
	cin >> Q;
	for(int q = 0; q < Q; ++q)
	{
		long long N, A, B, ans = 0;
		cin >> N >> A >> B;
		
		// 计杠禦1跑Θ案计 
		if(N % 2 != 0)
		{
			ans += A;
		}
		
		// 逞场ㄢㄢ禦琌ㄢ1獽﹜临琌2獽﹜ 
		A *= 2;
		if(A < B)
		{
			ans += N / 2 * A;
		}
		else
		{
			ans += N / 2 * B;
		}
		
		cout << ans << endl;
	}

    return 0;
}

