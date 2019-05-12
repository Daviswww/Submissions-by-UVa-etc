#include <iostream>
using namespace std;

int main()
{
	int N, M;
	
	// 輸入
	cin >> N >> M;
	
	// 不能整除 
	if(M % N != 0)
	{
		cout << -1 << endl; 
	}
	// 可以整除 
	else
	{
		// 取得商 
		int p = M / N, ans = 0;
		// 看有幾個2 
		while(p % 2 == 0)
		{
			p /= 2;
			++ans;
		}
		// 看有幾個3 
		while(p % 3 == 0)
		{
			p /= 3;
			++ans;
		}
		
		// 有2跟3以外的因數 
		if(p != 1)
		{
			cout << -1 << endl;
		} 
		else
		{
			// 輸出答案 
			cout << ans << endl;
		}
	}

    return 0;
}

