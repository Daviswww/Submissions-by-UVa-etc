#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, res = 0;
	string str;
	
	// 輸入多面體數量 
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> str;
		// 根據不同的多面體加不同的面數 
		if(str == "Tetrahedron")
		{
			res += 4;
		}
		else if(str == "Cube")
		{
			res += 6;
		}
		else if(str == "Octahedron")
		{
			res += 8;
		}
		else if(str == "Dodecahedron")
		{
			res += 12;
		}
		else if(str == "Icosahedron")
		{
			res += 20;
		}
	}
	
	// 輸出 
	cout << res << endl;

    return 0;
}

