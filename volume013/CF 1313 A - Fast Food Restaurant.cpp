#include <iostream>
using namespace std;

int main()
{
	int d[7][3] = {{0, 0, 1}, {0, 1, 0}, {0, 1, 1}, {1, 0, 0}, {1, 0, 1}, {1, 1, 0}, {1, 1, 1}};
	int T, N[3];
	int count, x[3], ans;
	
	cin >> T;
	for(int t = 0; t < T; ++t)
	{
		ans = 0;
		for(int i = 0; i < 3; ++i)
		{
			cin >> N[i];
		}
		
		for(int i = 0; i < (1 << 7); ++i)
		{
			count = 0;
			for(int j = 0; j < 3; ++j)
			{
				x[j] = 0;
			}
			
			for(int j = 0; j < 7; ++j)
			{
				if(((1 << j) & i) != 0)
				{
					++count;
					for(int k = 0; k < 3; ++k)
					{
						x[k] += d[j][k];						
					}					
				}
			}
			
			if(x[0] <= N[0] && x[1] <= N[1] && x[2] <= N[2] && ans < count)
			{
				ans = count;
			}
		}
		
		cout << ans << endl; 
	}

    return 0;
}

