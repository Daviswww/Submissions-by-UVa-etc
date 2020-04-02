#include <iostream>
using namespace std;

int main()
{
	int N, B[200007];
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> B[i];
	}
	
	int maxi = 0;
	for(int i = 0; i < N; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		
		cout << maxi + B[i];
		
		if(B[i] > 0)
		{
			maxi += B[i];
		}
	}
	cout << endl;

	return 0;
}

