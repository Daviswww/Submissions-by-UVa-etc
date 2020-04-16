#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, M;
	string Lamp[2000];
	cin >> N >> M;
	
	int count[2000];
	for(int i = 0; i < 2000; ++i)
	{
		count[i] = 0;
	}
	
	for(int i = 0; i < N; ++i)
	{
		cin >> Lamp[i];
		for(int j = 0; j < M; ++j)
		{
			count[j] += Lamp[i][j] - '0';
		}
	}
	
	bool ans = false;
	for(int i = 0, j; i < N; ++i)
	{
		for(j = 0; j < M; ++j)
		{
			if(Lamp[i][j] == '1' && count[j] <= 1)
			{
				break;
			}
		}
		
		if(j == M)
		{
			ans = true;
			break;
		}
	}

	cout << (ans ? "YES" : "NO") << endl;

    return 0;
}

