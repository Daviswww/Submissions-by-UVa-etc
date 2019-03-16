#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string str;
	cin >> N >> str;
	
	// len記黑色區域的長度，ans記有幾個黑色區域 
	int ans = 0, len[105];
	for(int i = 0; i < N; ++i)
	{
		// 遇到黑色 
		if(str[i] == 'B')
		{
			// 先歸0 
			len[ans] = 0;
			// 跑到不是黑色為止 
			while(str[i] == 'B')
			{
				++i;
				++len[ans];
			}
			// 增加一個黑色區域 
			++ans;
		}
	}
	
	// 輸出 
	cout << ans << endl;
	for(int i = 0; i < ans; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		
		cout << len[i];
	}
	cout << endl;

    return 0;
}

