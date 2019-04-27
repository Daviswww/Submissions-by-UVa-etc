#include <iostream>
using namespace std;

// 陣列最大長度 
#define AMAX (int)1e3 + 5

int main()
{
	int N, S, A[AMAX], B[AMAX];
	
	// 輸入 
	cin >> N >> S;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	for(int i = 0; i < N; ++i)
	{
		cin >> B[i];
	}
	
	// 根本出不去 
	if(A[0] == 0)
	{
		cout << "NO" << endl;
	}
	// 可以直達 
	else if(A[S - 1] == 1)
	{
		cout << "YES" << endl;
	}
	// 試試轉搭 
	else
	{
		bool yes = false;
		// 試每個第S站後面的站點 
		for(int i = S; i < N; ++i)
		{
			// 可以轉搭到第S站 
			if(A[i] == 1 && B[i] == 1 && B[S - 1] == 1)
			{
				cout << "YES" << endl;
				yes = true;
				break;
			}
		}
		
		// 轉搭也不行 
		if(!yes)
		{
			cout << "NO" << endl;
		}
	}

    return 0;
}

