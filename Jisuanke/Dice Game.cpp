#include<bits/stdc++.h>

using namespace std;

int main()
{
	int d1, d2, d3, d4;
	while(cin >> d1 >> d2 >> d3 >> d4)
	{
		int p1 = d1+d2+d3+d4, p2 = 0;
		cin >> d1 >> d2 >> d3 >> d4;
		p2 = d1+d2+d3+d4;
		if(p1 > p2)
		{
			cout << "Gunnar" << endl;
		}
		else if(p1 < p2)
		{
			cout << "Emma" << endl;
		}
		else
		{
			cout << "Tie" << endl;
		}
	}
	return 0;
} 
