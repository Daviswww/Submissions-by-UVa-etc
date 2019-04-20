#include <iostream>
using namespace std;

int main()
{
	int T;
	long long A, B, K, two_step;
	
	// 块唉计 
	cin >> T;
	for(int i = 0; i < T; ++i)
	{
		// 块 
		cin >> A >> B >> K;
		
		// –ㄢ˙ぶ 
		two_step = A - B;
		// ˙计琌案计 
		if(K % 2 == 0)
		{
			// 块ǐ碭Ωㄢ˙ 
			cout << two_step * K / 2 << endl;
		}
		// ˙计琌计 
		else
		{
			// 块ǐ碭Ωㄢ˙ǐ˙ 
			cout << two_step * (K / 2) + A << endl;
		}
	}

    return 0;
}

