#include <iostream>
using namespace std;

int main()
{
	int T, A, B;
	
	cin >> T;
	for(int t = 0; t < T; ++t)
	{
		cin >> A >> B;
		
		if(A == B)
		{
			cout << 0 << endl;
		}
		else if(A < B && (B - A) % 2 != 0)
		{
			cout << 1 << endl;
		}
		else if(A < B)
		{
			cout << 2 << endl;
		}
		else if(A > B && (A - B) % 2 != 0)
		{
			cout << 2 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}

    return 0;
}

