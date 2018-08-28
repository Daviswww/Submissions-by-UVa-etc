#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	
	while(cin >> str)
	{
		int x = 0, y = 0;
		bool go = true;
		if(str == "0")
		{
			break;
		}
		else
		{

			for(int i = 0; i < str.size(); i++)
			{
				if(go)
				{
					x += str[i] - '1' + 1;
					go = false;
				}
				else
				{
					y += str[i] - '1' + 1;
					go = true;
				}
			}
			if(abs(x - y) % 11 == 0)
			{
				cout << str <<" is a multiple of 11." << endl;
			}
			else
			{
				cout << str <<" is not a multiple of 11." << endl;
			}			
		}
	}
	return 0;
}

