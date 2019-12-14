#include <iostream>
#include <algorithm>
using namespace std;

int A[200007];
long long k[200007], s[200007];

int main()
{
	int N, M;
	
	cin >> N >> M;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	sort(A, A + N);
	
	s[0] = A[0];
	k[0] = A[0];
	cout << k[0];
	for(int i = 1; i < N; ++i)
	{
		s[i] = A[i] + s[i - 1];
		
		if(i < M)
		{
			k[i] = s[i];
		}
		else
		{
			k[i] = s[i] + k[i - M];
		}
		
		cout << " " << k[i];
	}
	cout << endl;

    return 0;
}

