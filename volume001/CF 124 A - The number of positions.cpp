#include <iostream>
using namespace std;

int main()
{
	int N, A, B;
	cin >> N >> A >> B;
	
	// �����|������ 
	cout << min(N - A, B + 1) << endl;

    return 0;
}
