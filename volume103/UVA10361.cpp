#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin >> n;
	getchar();
	for( int g = 0 ; g < n ; ++g )
	{
		string str[5], c2;
		for( int i = 0 ; i < 5 ; ++i )
		{
			char c;
			while( (c = getchar()) && c != '<' && c != '>' && c != '\n' )
			{
				str[i] += c;
			}
		}
		for( int i = 0 ; i < 5 ; ++i )
		{
			printf("%s", str[i].c_str());
		}
		puts("");
		getline(cin, c2);
		c2 = c2.substr(0, c2.size() - 3) + (str[3] + str[2] + str[1] + str[4]);
		cout << c2 << endl;
	}
	return 0;
}
