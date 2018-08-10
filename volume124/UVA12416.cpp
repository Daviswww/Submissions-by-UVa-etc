#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	string str;
	while(getline(cin, str))
	{
		int sp = 0, n = 0, ans = 0;
		
		for( int i = 0 ; i < str.size() ; i++)
		{
			if( str[i] == ' ') 
			{
				sp++;
			}
			else 
			{
			   n = max(n, sp);
			   sp = 0;
			}
		}
		ans = int(ceil(log2(n)));
		cout << ans << endl;
	}
	return 0;
}
