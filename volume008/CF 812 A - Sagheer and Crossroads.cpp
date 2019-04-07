#include <iostream>
using namespace std;

int main()
{
	int Light[4][4];
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			cin >> Light[i][j];
		}
	}
	
	bool acc = false;
	// 四個方向 
	for(int i = 0; i < 4; ++i)
	{
		// 三個車道 
		for(int j = 0; j < 3; ++j)
		{
			// 跟自己的行人和目的地的行人比較 
			if((Light[i][j] & Light[i][3]) != 0 || (Light[i][j] & Light[(i + 3 - j) % 4][3]) != 0)
			{
				acc = true;
			}
		}
	}
	
	cout << (acc ? "YES" : "NO") << endl;

    return 0;
}

