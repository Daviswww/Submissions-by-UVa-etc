#include <iostream>
using namespace std;

int main()
{
	int N, num[10];
	cin >> N;
	
	for(int i = 0; i < N; ++i)
	{
		num[i] = 1;
	}
	
	for(int i = 1; i < N; ++i)
	{
		for(int j = 1; j < N; ++j)
		{
			num[j] += num[j - 1];
		}
	}
	
	cout << num[N - 1] << endl;

    return 0;
}

