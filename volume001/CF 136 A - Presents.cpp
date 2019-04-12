#include <iostream>
using namespace std;

int main()
{
	int N, P[100], temp;
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{		
		// 輸入 
		cin >> temp;
		// P[收到禮物的人] = 送禮的人 
		P[temp - 1] = i + 1;
	}
	
	// 輸出 
	for(int i = 0; i < N; ++i)
	{
		if(i != 0)
		{
			cout << " ";
		}
		
		cout << P[i];
	}
	cout << endl;

    return 0;
}

