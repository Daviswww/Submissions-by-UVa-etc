#include<bits/stdc++.h>

using namespace std;
const int N = 4;
int main()
{
	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a, a+N);
	for(int i = 0; i < N-1; i++)
	{
		cout << a[N-1] - a[i] << " ";
	}
	return 0;
}
