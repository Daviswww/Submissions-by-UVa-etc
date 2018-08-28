#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str0 = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./", str1;
	
	while(getline(cin, str1))
	{
		for(int i = 0; i < str1.size(); i++)
		{
			for(int j = 0; j < str0.size(); j++)
			{
				if(str1[i] == str0[j])
				{
					cout << str0[j-2];
					break; 
				}
				if(str1[i] == ' ')
				{
					cout << " ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
