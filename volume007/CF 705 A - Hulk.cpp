#include <iostream>
using namespace std;

int main()
{
	int N;
	
	// 輸入 
	cin >> N;
	
	// 多跑一個當結尾 
	for(int i = 0; i <= N; ++i)
	{
		// 第一個，前面沒 that 
		if(i == 0)
		{
			cout << "I hate ";
		}
		// 最後一個，只有 it 
		else if(i == N)
		{
			cout << "it";
		}
		// 第奇數個，輸出 hate 
		else if(i % 2 == 0)
		{
			cout << "that I hate ";
		}
		// 第偶數個，輸出 love 
		else
		{
			cout << "that I love ";
		}
	}
	cout << endl;

    return 0;
}

