//https://uva.onlinejudge.org/external/2/272.pdf
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	bool k = true;
	ofstream fout;
	fout.open("OutputFile.txt");
	while(getline(cin, str))
	{
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == '"' && k)
			{
				cout << "``";
				k = false;
			}
			else if(str[i] == '"' && !k)
			{
				cout << "''";
				k = true;
			}
			else
			{
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}
