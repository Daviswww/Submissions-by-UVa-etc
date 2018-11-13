#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(void)
{
	int n, y[26], yy[26];
	string x[1000];
	cin >> n;
	for(int i = 0; i < 26; i++)
	{
		y[i] = 0, yy[i] = i;
	}
	for(int ii = 0; ii <= 3; ii++)
	{
		getline (cin,x[ii]);
		for(int i = 0; i < x[ii].length(); i++)
		{
			if(x[ii][i] >= 'A' && x[ii][i] <= 'Z' )
				y[x[ii][i]- 'A'] += 1;
			if(x[ii][i] >= 'a' && x[ii][i] <= 'z' )
				y[x[ii][i]- 'a'] += 1;
		}
	}
	for(int i = 0; i < 26; i++)
	{
		for(int j = 0; j < 26; j++)
		{
			if(y[i] > y [j])
			{
				int ck, cl;
				ck = y[i], cl = yy[i];
				y[i] = y[j], yy[i] = yy[j];
				y[j] = ck, yy[j] = cl;
			}
			if(y[i] == y[j] && yy[i] < yy[j])
			{
				int ck, cl;
				ck = y[i], cl = yy[i];
				y[i] = y[j], yy[i] = yy[j];
				y[j] = ck, yy[j] = cl;
			}
		}
	}
	for(int i = 0; i < 26; i++)
	{
		char cl = 'A' + yy[i] ;
		if(y[i] == 0) break;
		cout << cl << " " << y[i] <<endl;
	}
	return 0;
}
