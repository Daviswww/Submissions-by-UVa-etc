#include<iostream>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int ary[n], max = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
		}
		cin >> max;
		for(int i = 0; i < n; i++)
		{
			if(max == ary[i])
			{
				cout << i<< endl;
				break;
			}
			if(i == n-1)
			{
				cout << "-1" <<endl;
				break;
			}
		}
	}
	return 0;	
} 
