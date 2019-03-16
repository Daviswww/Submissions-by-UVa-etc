#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	// 能走5就走5，有剩下的就再多走一步 
	cout << N / 5 + (N % 5 == 0 ? 0 : 1) << endl;

    return 0;
}

