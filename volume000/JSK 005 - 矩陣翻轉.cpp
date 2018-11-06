#include<iostream>

using namespace std;

int main()
{
	int m, n, t;
	
	while(cin >> m >> n >> t)
	{
		
		int ary[205][205];
		
		if(t == 1)
		{
			for(int i = m; i > 0 ; i--)
			{	
				for(int j = 1; j<= n; j++)
				{
					cin >> ary[i][j];
				}
			}
		}
		else
		{
			for(int i = 1; i <= m; i++)
			{	
				for(int j = n; j > 0; j--)
				{
					cin >> ary[i][j];
				}
			}
		}
		
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j<= n; j++)
			{
				cout << ary[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
