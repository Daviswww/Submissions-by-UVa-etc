#include <bits/stdc++.h>

using namespace std;

long long a[30005];
int b[]={1, 5, 10, 25, 50};
int main(void)
{
	ofstream fout;
	fout.open("OutputFile.txt");
	for (int i = 0; i <= 30000;++i) 
	{
		a[i]=1;
	}
	for (int i = 1; i < 5; ++i)
	{
		for (int j= b[i] ;j <= 30000; ++j)
		{
			a[j]+=a[j-b[i]];
		}
	}
	int n;
	while(cin >> n)
	{
		if(a[n] == 1)
		{
			cout << "There is only "<< a[n] <<" way to produce " << n <<" cents change." << endl;
		}
		else
		{
			cout << "There are "<< a[n] <<" ways to produce " << n <<" cents change." << endl;
		}
	}
	return 0;
}
