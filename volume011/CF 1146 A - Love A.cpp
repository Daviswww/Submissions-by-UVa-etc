#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string str;
	
	// 輸入 
	cin >> str;
	
	// 計算a的數量 
	int a = 0;
	for(int i = 0; i < str.length(); ++i)
	{
		if(str[i] == 'a')
		{
			++a;
		}
	}
	
	// 夠長的話最多到2 * a + 1，不夠就取現在的長度 
	cout << min(2 * a - 1, (int)str.length()) << endl;

    return 0;
}

