/*
https://nanti.jisuanke.com/t/130
input
we are happy
output
we%20are%20happy
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	
	while(getline(cin , str))
	{
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == ' ')
			{
				cout << "%20";
			}
			else
			{
				cout << str[i];
			}
		}
		cout << endl;
	}

	return 0;
} 
