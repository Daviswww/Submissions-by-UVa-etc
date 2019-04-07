#include <iostream>
using namespace std;

int main()
{
	int N, A, B;
	cin >> N >> A >> B;
	
	// 取重疊的部分 
	cout << min(N - A, B + 1) << endl;

    return 0;
}

