#include <iostream> 
#include <algorithm>
using namespace std;

int main()
{
	int N, D, A[107], M;
	cin >> N >> D;
	
	int sum = 0;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	cin >> M;
	
	sort(A, A + N);
	for(int i = 0; i < M && i < N; ++i)
	{
		sum += A[i];
	}
	
	cout << sum + (N < M ? (N - M) * D : 0) << endl;

	return 0;
}
