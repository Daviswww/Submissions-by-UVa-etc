#include <iostream>
using namespace std;

int main()
{
	int Q, N;
	cin >> Q;
	for(int q = 0; q < Q; ++q)
	{
		cin >> N;
		
		if(N < 4)
		{
			cout << 4 - N << endl;
		}
		else
		{
			cout << (N % 2 == 0 ? 0 : 1) << endl;
		}
	} 

    return 0;
}

