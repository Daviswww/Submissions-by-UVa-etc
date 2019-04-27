#include <iostream>
using namespace std;

int main()
{
	int N;
	
	// 輸入 
	cin >> N;
	
	// 長度不到3，輸出-1 
	if(N < 3)
	{
		cout << -1 << endl;
	}
	// 長度在3以上，前面都輸出2，最後一個1 
	else
	{
		for(int i = 0; i < N - 1; ++i)
		{
			cout << "2 ";
		}
		cout << 1 << endl;
	}

    return 0;
}

