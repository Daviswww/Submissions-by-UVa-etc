#include<bits/stdc++.h>

using namespace std;
const int N = 5;
const int dollar[N] = {100, 20, 10, 5, 1};

int main()
{
	int n, count = 0;
	
	cin >> n;
	
	for(int i = 0; i < N; i++)
	{
		count += n/dollar[i];
		n %= dollar[i];
	}
	cout << count << endl;
	return 0;
}
