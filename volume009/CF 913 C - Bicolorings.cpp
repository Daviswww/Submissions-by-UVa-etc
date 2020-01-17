#include <iostream>
using namespace std;

int main()
{
	long long N, L, C[32], x[32], ans;
	
	x[0] = 1;
	for(int i = 1; i < 32; ++i)
	{
		x[i] = x[i - 1] * 2;
	}
	
	cin >> N >> L;
	for(int i = 0; i < N; ++i)
	{
		cin >> C[i];
		
		if(i > 0 && C[i] > C[i - 1] * 2)
		{
			C[i] = C[i - 1] * 2;
		}
	}
	
	ans = L / x[N - 1] * C[N - 1];
	L = L % x[N - 1];
	
	if(L > 0)
	{
		long long m = 0, f = 1, temp;
		for(int i = 0; i < N - 1; ++i)
		{
			temp = (1 << i);
			
			if((temp & L) != 0)
			{
				m += C[i];
			}
		}
		
		for(int i = 0; i < N; ++i)
		{
			temp = (1 << i);
			
			L = temp ^ L;
			if((temp & L) != 0)
			{
				--i;
				
				long long sum = 0;
				for(int j = 0; j < N; ++j)
				{
					temp = (1 << j);
					
					if((temp & L) != 0)
					{
						sum += C[j];
					}
				}
				
				if(sum < m)
				{
					m = sum;
				}
			}
		}
		
		ans += m;
	}
	
	cout << ans << endl;

    return 0;
}

