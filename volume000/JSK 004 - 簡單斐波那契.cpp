#include<iostream>

using namespace std;

int main()
{
	int n, ary[55];
	
	ary[0] = 0;
	ary[1] = 1;
	
	for(int i = 2; i<=50; i++)
	{
		ary[i] = ary[i - 1] + ary[i - 2];
	}
	
	while(cin >> n)
	{
		cout << ary[n] << endl;
	}
	
	return 0;
}
