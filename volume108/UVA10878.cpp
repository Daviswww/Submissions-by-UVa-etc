#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
	ofstream fout;
	fout.open("OutputFile.txt"); 
    getline(cin, st);
	while (getline(cin, st))
	{
		if (st[0] == '_')
		{
			break;
		} 
		if (st[0] != '|')
		{
			continue;
		} 
		char c = 0;
		for (int i=0; st[i]; i++)
		{
			if (st[i]==' ' || st[i]=='o')
			{
				c <<= 1;					
			}
			if (st[i]=='o')
			{
				c++; 
			}
		}
		cout << char(c);
	}
	return 0;
}
