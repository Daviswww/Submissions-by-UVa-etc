#include<iostream>

using namespace std;

int main()
{
	int n;
  
	while(cin >> n)
	{
		bool ans = true;
		
		for(int i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				ans = false;
			}
		}	
		if(ans)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
  	}  
  	return 0;
}
