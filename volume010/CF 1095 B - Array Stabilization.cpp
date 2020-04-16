#include <iostream>
#include <algorithm>
using namespace std;

int A[200007];

int main()
{
	int N;
	cin >> N;
	
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	sort(A, A + N);
	
	int a = A[N - 1] - A[1];
	int b = A[N - 2] - A[0];
	cout << (a < b ? a : b) << endl;
	
    return 0;
}

