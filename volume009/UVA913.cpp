//https://uva.onlinejudge.org/external/9/913.pdf
#include<bits/stdc++.h>

using namespace std;
int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");	
	int n;
	
	while(cin >> n)
	{
		long long sum = 0;
		
		if(n == 1)
		{
			cout << 1 << endl;
		}
		else
		{
		    sum = (n + 1) / 2;
		    sum = sum * sum * 2 - 1;
		    sum = 3 * sum - 6;
		    cout << sum << endl;		
		}
	}
	return 0;
}
