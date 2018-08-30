#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	while(cin >> a >> b >> c)
	{
		int div = 0;
		for(int i = a; i <= b; i++)
		{
			if(c % i == 0)
			{
				div++;	
			}	
		}
		cout << div << endl;
	}

	return 0;
}

