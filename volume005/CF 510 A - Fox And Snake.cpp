#include <iostream>
using namespace std;

int main()
{
	int N, M;
	bool left = false;
	
	// 块 
	cin >> N >> M;
	
	for(int i = 0; i < N; ++i)
	{
		// 计︽场块# 
		if(i % 2 == 0)
		{
			for(int j = 0; j < M; ++j)
			{
				cout << "#";
			}
		}
		// 案计︽ 
		else
		{
			// 近オ娩# 
			if(left)
			{
				cout << "#";
			}
			
			// M - 1. 
			for(int j = 0; j < M - 1; ++j)
			{
				cout << ".";
			}
			
			// 近娩# 
			if(!left)
			{
				cout << "#";
			}
			
			left = !left;
		}
		
		// 传︽ 
		cout << endl;
	} 

    return 0;
}

