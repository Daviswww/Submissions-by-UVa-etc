#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	int n, q;
	string a;
	cin >> n;
	getchar();
	
	for(int i = 0; i < n; i++)
	{
		getline(cin,a);
		q = sqrt(a.size());
		if(q * q == a.size()) 
		{
			for(int j = 0; j < q; j++)
			{	
				int r = 0;
				for(int k = 0; k < q;k++)
				{
				cout << a[j + r];
				r += q;
				}

			}
			cout << endl;
		}
		else cout <<"INVALID" << endl;
	}	
}
