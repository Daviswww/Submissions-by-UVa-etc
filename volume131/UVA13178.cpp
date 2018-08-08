/*
https://uva.onlinejudge.org/external/131/13178.pdf
input
3
2
6
130000000
output
YES
YES
NO
*/

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int k;
		cin >> k;

		if((n-1) % 3 == 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;	
		}		
	}
	return 0;
}
