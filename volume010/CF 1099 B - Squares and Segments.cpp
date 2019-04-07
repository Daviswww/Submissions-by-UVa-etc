#include <iostream>
using namespace std;

int main()
{
	int N, ans = 2, t = 1;
	cin >> N;
	
	// 先減1，一開始2條邊有1格 
	--N;
	// 還有格子放不進去 
	while(N > 0)
	{
		// 右邊加一排，多一條邊 
		N -= t;
		++ans;
		
		// 夠了的話結束 
		if(N <= 0)
		{
			break;
		}
		
		// 下面加一排，多一條邊 
		++t;
		N -= t;
		++ans;
	}
	
	cout << ans << endl;

    return 0;
}

