#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int Ball[50];
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> Ball[i];
	}
	
	// 從小排到大 
	sort(Ball, Ball + N);
	
	bool OK = false;
	// 第一顆球 
	for(int i = 0; i < N - 2 && !OK; ++i)
	{
		// 第二顆球 
		for(int j = i + 1; j < N - 1 && !OK; ++j)
		{
			// 一跟二不一樣的話 
			if(Ball[i] != Ball[j])
			{
				// 第三顆球 
				for(int k = j + 1; k < N && !OK; ++k)
				{
					// 二跟三不一樣的話 
					if(Ball[j] != Ball[k])
					{
						// 第一顆+1=第二顆，第二顆+1=第三顆 
						if(Ball[i] + 1 == Ball[j] && Ball[j] + 1 == Ball[k])
						{
							OK = true;
						}
					}
				}
			}
		}
	}
	
	cout << (OK ? "YES" : "NO") << endl;

    return 0;
}

