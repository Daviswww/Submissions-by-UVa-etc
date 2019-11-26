#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int n;
	cin >> n;
	
	for(int i= 0; i < n; i++)
	{
		int m;
		cin >> m;
		cin >> str;
		if(m == 2 && str[0] >= str[1])
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n2\n");
			cout << str[0] << " ";
			str.erase (0,1); 
			cout << str << endl;
		}
	}
	return 0;	
}
