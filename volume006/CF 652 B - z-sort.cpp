#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, A[1007], ans[1007];
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	sort(A, A + N);
	
	int a = 0, b = (N + 1) / 2;
	bool impossible = false;
	ans[0] = A[0];
	for(int i = 1; i < N; ++i)
	{
		if(i % 2 == 0 && A[a] <= A[b])
		{
			ans[i] = A[a];
			++b;
		}
		else if(i % 2 != 0 && A[a] <= A[b])
		{
			ans[i] = A[b];
			++a;
		}
		else
		{
			impossible = true;
			break;
		}
	}
	
	if(impossible)
	{
		cout << "Impossible" << endl;
	}
	else
	{
		for(int i = 0; i < N; ++i)
		{
			if(i != 0)
			{
				cout << " ";
			}
			cout << ans[i];
		}
		cout << endl;
	}

    return 0;
}

