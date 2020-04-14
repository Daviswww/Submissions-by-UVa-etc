#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	char T[207];
	
	cin >> N >> T;

	sort(T, T + N);	
	sort(T + N, T + 2 * N);
	
	int less = 0, more = 0;
	for(int i = 0; i < N; ++i)
	{
		if(T[i] < T[i + N])
		{
			++less;
		}
		if(T[i] > T[i + N])
		{
			++more;
		}
	}
	
	if(less == N || more == N)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
