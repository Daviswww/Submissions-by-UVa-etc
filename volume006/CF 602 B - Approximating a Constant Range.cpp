#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N, A[100000];
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	
	int l = 0, r = 1, len = 1, m = A[0], M = A[0], pm = 0, pM = 0;
	while(r < N)
	{
		if(A[r] == m - 1)
		{
			if(m != M)
			{
				l = pM + 1;
				pM = pm;
				pm = r;
				M = m;
				m = A[r];
			}
			else
			{
				pm = r;
				m = A[r];
			}
		}
		else if(A[r] == M + 1)
		{
			if(m != M)
			{
				l = pm + 1;
				pm = pM;
				pM = r;
				m = M;
				M = A[r];
			}
			else
			{
				pM = r;
				M = A[r];
			}
		}
		else if(A[r] == m)
		{
			if(m == M)
			{
				pM = r;
			} 
			pm = r;
		}
		else if(A[r] == M)
		{
			if(m == M)
			{
				pm = r;
			} 
			pM = r;
		}
		else
		{
			l = r;
			pm = r;
			pM = r;
			m = A[r];
			M = A[r];
		}
		
		++r;
		if(r - l > len)
		{
			len = r - l;
		}
	}
	
	cout << len << endl;

    return 0;
}
?
