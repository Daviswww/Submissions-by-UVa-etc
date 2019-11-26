#include<bits/stdc++.h> 

using namespace std;

int main()
{
	int q, a, b, n, s;
	
	cin >> q;
	
	while(q--)
	{
		cin >> a >> b>> n >> s;
		
		int k = s/n;
		if( s/n > a)
		{
			k = a;
		}
		//cout << k << endl;
		if(s - (k * n) <= b)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}
