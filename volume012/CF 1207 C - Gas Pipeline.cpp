#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long one[200007], two[200007];

int main()
{
	int T, N, A, B;
	string road;
	
	cin >> T;
	for(int t = 0; t < T; ++t)
	{
		cin >> N >> A >> B >> road;
		
		one[0] = B;
		two[0] = 1e15;
		
		int count = road.length();
		long long v11, v12, v21, v22;
		for(int i = 1; i < count; ++i)
		{
			v11 = one[i - 1] + A + B;
			v12 = one[i - 1] + 2 * A + 2 * B;
			v21 = two[i - 1] + 2 * A + B;
			v22 = two[i - 1] + A + 2 * B;
			
			if(road[i] == '0' && road[i - 1] == '0')
			{
				one[i] = min(v11, v21);
				two[i] = min(v12, v22);
			}
			else
			{
				one[i] = 1e15;
				two[i] = min(v12, v22);
			}
		}
		
		v11 = one[count - 1] + A + B;
		v21 = two[count - 1] + 2 * A + B;
			
		cout << min(v11, v21) << endl;
	}

    return 0;
}


