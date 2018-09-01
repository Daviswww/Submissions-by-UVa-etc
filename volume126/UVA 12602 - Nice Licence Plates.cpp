#include <bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int n;
	cin >> n;
	while(n--)
	{
		int p = 0, q = 0;
		string str;			
		cin >> str;
		
		for(int i = 0, j = 2;i < 3;i++, j--)
		{
			q += (str[j] - 'A') * pow(26, i);
		}
		for(int i = 4; i < 8; i++)
		{
			p += str[i] - '0';
			if(i == 7) 
			{
				break;
			}
			p *= 10;
		}
		if(abs(q - p)<= 100)
		{
			cout << "nice" << endl;
		}
		else
		{
			cout << "not nice" << endl;
		}			
	}
	return 0;
}
