#include <iostream>
using namespace std;

int main()
{
	int N, A[100007], turn = 0, pos = 0;
	
	cin >> N >> A[0];
	for(int i = 1; i < N; ++i)
	{
		cin >> A[i];
		if(A[i] < A[i - 1])
		{
			++turn;
			pos = i;
		}
	}
	
	if(turn > 1 || (turn == 1 && A[0] < A[N - 1]))
	{
		cout << -1 << endl;
	}
	else if(turn == 1)
	{
		cout << N - pos << endl;
	}
	else
	{
		cout << 0 << endl;
	}

    return 0;
}

