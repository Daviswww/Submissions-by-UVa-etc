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

		if((k-1) % 3 == 0)
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
