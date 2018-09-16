#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int h = 0, m = 0, s = 0;
		h = n / 3600;
		m = (n - h * 3600) / 60;
		s = n - (h * 3600) - (m * 60);
		cout << h << ":" << m << ":" << s << endl;	
	}
	return 0;
}

