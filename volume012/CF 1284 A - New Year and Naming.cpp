#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, M;
	string Nstr[20], Mstr[20];
	
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> Nstr[i];
	}
	for(int i = 0; i < M; ++i)
	{
		cin >> Mstr[i];
	}
	
	int Q, Y;
	cin >> Q;
	
	for(int q = 0; q < Q; ++q)
	{
		cin >> Y;
		cout << Nstr[(Y - 1) % N] << Mstr[(Y - 1) % M] << endl;
	}

    return 0;
}

