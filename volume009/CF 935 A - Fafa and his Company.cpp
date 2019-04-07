#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int ans = 1;
	// 跑所有2以上的因數 
	for(int i = 2; i * i <= N; ++i)
	{
		if(N % i == 0)
		{
			// 平方根只加1 
			if(i * i == N)
			{
				++ans;
			}
			// 其他加2 
			else
			{
				ans += 2;
			}
		}
	}
	
	cout << ans << endl;

    return 0;
}

