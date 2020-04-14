#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int t = 0; t < T; ++t)
	{
		int N;
		cin >> N;
		
		bool d[10];
		for(int i = 0; i < 10; ++i)
		{
			d[i] = false;
		}
		
		string P[10];
		for(int i = 0; i < N; ++i)
		{
			cin >> P[i];
			d[P[i][3] - '0'] = true;
		}
		
		int ans = 0;
		for(int i = 0; i < N; ++i)
		{
			for(int j = 0; j < i; ++j)
			{
				if(P[i] == P[j])
				{
					for(int k = 0; k < 10; ++k)
					{
						if(!d[k])
						{
							P[i][3] = '0' + k;
							d[k] = true;
							break;
						}
					}
					
					++ans;
					break;
				}
			}
		}
		
		cout << ans << endl;
		for(int i = 0; i < N; ++i)
		{
			cout << P[i] << endl;
		}
	}

    return 0;
}

