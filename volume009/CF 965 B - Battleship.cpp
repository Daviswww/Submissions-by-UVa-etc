#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, K;
	string sea[105];
	cin >> N >> K;
	for(int i = 0; i < N; ++i)
	{
		cin >> sea[i];
	}
	
	// M是最高的可能性次數，MX、MY是座標 
	int M = 0, MX, MY;
	int p[105][105];
	// 先建立一個陣列，歸0，用來存船的出現次數 
	for(int i = 0; i < N; ++i)	
	{
		for(int j = 0; j < N; ++j)
		{
			p[i][j] = 0;
		}
	}
	
	// 跑船是橫的的情況 
	for(int i = 0; i < N; ++i)	
	{		
		for(int j = 0; j < N - K + 1; ++j)
		{
			// 假設船是橫的，而且最左邊那格是(i, j)
			
			// 判斷右邊是不是夠長來放船 
			bool dot = true;
			for(int a = 0; a < K; ++a)
			{
				if(sea[i][j + a] == '#')
				{
					dot = false;
				}
			}
			
			// 夠長，把這一段的次數都加1 
			if(dot)
			{
				for(int a = 0; a < K; ++a)
				{
					++p[i][j + a];
					
					if(p[i][j + a] > M)
					{
						M = p[i][j + a];
						MX = i;
						MY = j + a;
					}
				}
			}
		}
	}
	
	// 跑船是直的的情況 
	for(int j = 0; j < N; ++j)	
	{		
		for(int i = 0; i < N - K + 1; ++i)
		{
			// 假設船是直的，而且最上面那格是(i, j)
			
			// 判斷下面是不是夠長來放船 
			bool dot = true;
			for(int a = 0; a < K; ++a)
			{
				if(sea[i + a][j] == '#')
				{
					dot = false;
				}
			}
			
			// 夠長，把這一段的次數都加1 
			if(dot)
			{
				for(int a = 0; a < K; ++a)
				{
					++p[i + a][j];
					
					if(p[i + a][j] > M)
					{
						M = p[i + a][j];
						MX = i + a;
						MY = j;
					}
				}
			}
		}
	}
	
	cout << MX + 1 << " " << MY +1 << endl;

    return 0;
}

