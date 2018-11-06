#include<iostream>

using namespace std;

int main()
{
	string a, b;
	
	while(cin >> a >> b)
	{
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] == b[i])
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
	}
	return 0;
} 
