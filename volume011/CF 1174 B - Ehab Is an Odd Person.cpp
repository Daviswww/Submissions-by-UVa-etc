#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, A[100007];
	bool have_odd = false, have_even = false;
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
		
		if(A[i] % 2 == 0)
		{
			have_even = true;
		}
		else
		{
			have_odd = true;
		}
	}
	
	if(have_odd && have_even)
	{
		sort(A, A + N);
	}
	
	for(int i = 0; i < N; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		cout << A[i];
	}
	cout << endl;

	return 0;
}
