#include <iostream>
using namespace std;

int main()
{
	int N, A[128], B[128];
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	for(int i = 0; i < N; ++i)
	{
		cin >> B[i];
	}
	
	int a = 0, b = 0;
	for(int i = 0; i < N; ++i)
	{
		if(A[i] == 1 && B[i] == 0)
		{
			++a;
		}
		
		if(A[i] == 0 && B[i] == 1)
		{
			++b; 
		} 
	}
	
	if(a > b)
	{
		cout << 1 << endl;
	}
	else if(a != 0)
	{
		cout << (b + 1) / a + ((b + 1) % a == 0 ? 0 : 1) << endl;
	}
	else
	{
		cout << -1 << endl; 
	}

    return 0;
}

