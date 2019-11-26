#include<bits/stdc++.h>
#define min(X, Y) (X < Y ? X : Y)
using namespace std;
const int N = 400000;
int main()
{
	int n, mm = N;
	
	cin >> n;
	
	for(int i = 1; i <= n/2+1; i++)
	{
		if(n % i == 0)
		{
			mm = min(mm, i * 2 + (n/i)*2);
		}	
	}
	cout << mm << endl;
	return 0;
}
