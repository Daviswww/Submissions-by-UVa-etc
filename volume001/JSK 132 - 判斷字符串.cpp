#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	
	while(cin >> str)
	{
		bool x = false;

	
		if(str.size() == 11)
		{
			if(str[0] == '1')
			{
				for(int i = 0; i < str.size(); i++)
				{
					int sum = str[i] - '0';
					if(sum >= 0 && sum <= 9)
					{
						x = true;
					}
					else
					{
						x = false;
						break;
					}
				}
				if(x)
				{
					cout << "1" << endl; 
				}
				else
				{
					cout << "0" << endl; 
				}
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else
		{
			cout << "0" << endl;
		}
	}
	return 0;	
} 
