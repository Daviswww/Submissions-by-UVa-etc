#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int D[3];
	
	// 輸入 
	for(int i = 0; i < 3; ++i)
	{
		cin >> D[i];
	}
	
	// 繞一圈 
	int all = D[0] + D[1] + D[2];
	// 不走第一條 
	int n0 = 2 * (D[1] + D[2]);
	// 不走第二條 
	int n1 = 2 * (D[0] + D[2]);
	// 不走第三條 
	int n2 = 2 * (D[0] + D[1]);
	
	// 輸出最短的 
	cout << min(all, min(n0, min(n1, n2))) << endl; 

    return 0;
}

