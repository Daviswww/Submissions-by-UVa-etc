#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str;
	while(cin >> str)
	{
		if (isalpha(str))
		{
			cout << "Is alphabetic!" << endl;
		}
		else
		{
			cout << "Is not alphabetic!" << endl;
		}	
	}
	return 0;
}
