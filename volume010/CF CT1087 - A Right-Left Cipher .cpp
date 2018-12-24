#include<bits/stdc++.h>

using namespace std;

int main()
{	
	string str;
	
	while(cin >> str)
	{
		int mid = (str.size()-1)/2 ;
		int r = mid-1, l = mid+1;
		if(str.size() == 1)
		{
			cout << str[0];
		}
		else
		{
			cout << str[mid];
			while(r >= 0 || l != str.size())
			{
				if(l != str.size())
				{
					cout << str[l++];
				}
				if(r >= 0)
				{
					cout << str[r--];
				}
			}
		}
		cout << endl;
	}
	return 0;
} 
