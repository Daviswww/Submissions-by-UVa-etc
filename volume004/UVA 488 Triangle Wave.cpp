//https://uva.onlinejudge.org/external/4/488.pdf
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	ofstream fout;
	fout.open("OutputFile.txt");
	cin >> n;
	while(n--)
	{
		int k, s; 
		cin >> k >> s;
		while(s--)
		{
			for(int j = 1; j <= k; j++)
			{
				for(int g = 1; g <= j; g++)
				{
					cout << j;
				}
				cout << endl;
			}
			for(int j = k-1; j >= 1; j--)
			{
				for(int g = j; g >=1; g--)
				{
					cout << j;
				}
				cout << endl;
			}
			if(s)
            cout<<endl; 
		}
		if(n)
        cout<<endl; 
	}
	return 0;	
} 
