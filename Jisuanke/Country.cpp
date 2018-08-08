#include<iostream>

using namespace std;

int main()
{
	string x, y;
	while(cin >> x >> y)
	{
		string ans;
		
		for(int i = 0; i < x.size(); i++)
		{
			if(x[i] == y[i])
			{
				cout << "1";
			}
			else
			{
				cout << "0"; 
			}
		}
		cout << endl;
	}
	return 0;	
} 
