#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string str;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> str;
		if(str.size() == 5)
		{
			cout << 3 << endl;
		}
		else
		{
			if((str[0] == 'o' && str[1] == 'n') || (str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e'))
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 2 << endl;
			}
		}
	}
	return 0;	
} 
