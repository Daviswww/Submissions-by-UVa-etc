#include <iostream>
using namespace std;

int main()
{
	// 先把1000以下的幸運數字都寫出來 
	int lucky[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	
	int N;
	cin >> N;
	
	// ans存是不是幾乎幸運數字 
	bool ans = false;
	for(int i = 0; i < 14; ++i)
	{
		// 可以被其中一個幸運數字整除，是幾乎幸運數字 
		if(N % lucky[i] == 0)
		{
			ans = true;
			break;
		}
	}
	
	// 三元運算子 ?: ，左邊放判斷式，true的話執行中間，不然執行右邊
	// 基本上等於是簡易的if else 
	cout << (ans ? "YES" : "NO") << endl;

    return 0;
}

