#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	for(int g = 0; g < n; g++)
	{
		int x, y;
		cin >> x >> y;
		if(x < y)
		{
			cout << "<" << endl;
		}
		else if(x > y)
		{
			cout << ">" << endl;
		}
		else
		{
			cout << "=" << endl;
		}
	}
	return 0;
}
