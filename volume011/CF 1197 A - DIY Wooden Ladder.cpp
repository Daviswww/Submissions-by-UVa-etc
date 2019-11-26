#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T, n;
	int A[100000];
	int max, max2;
	
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		cin >> n;
		for(int j = 0; j < n; j++)
		{
			cin >> A[j];
			
			if(j == 1)
			{
				if(A[0] > A[1])
				{
					max = A[0];
					max2 = A[1];
				}
				else
				{
					max = A[1];
					max2 = A[0];
				}
			}
			if(j >= 2)
			{
				if(A[j] >= max)
				{
					max2 = max;
					max = A[j];
				}
				else if(A[j] > max2)
				{
					max2 = A[j];
				}
			}
		}
		if((n-2) < (max2-1))
		{
			cout << n-2 << endl;
		}
		else
		{
			cout << max2-1 << endl;
		}
	}
	return 0;
}
