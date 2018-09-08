#include <bits/stdc++.h>

using namespace std;

int f(int x)
{
	return (x*x);
}

int main(){
	int d;

	while( cin >> d )
	{
		int sum = 0;
		for(int i=1 ; (d*i) <= (600-d) ; i++)
		{
			sum += f(d*i) * d;
		}
		cout << sum << endl;
	}
	return 0;
}
