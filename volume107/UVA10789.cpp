#include<bits/stdc++.h>

using namespace std;

int main()
{
	//ofstream fout;
	//fout.open("OutputFile.txt");
	int n, prime[2005], w = 0, ary[205];
	
	for(int i = 2; i < 2000; i++)
	{
		int g = 0;
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				g++;
			}
		}
		if(g == 2)
		{
			//cout << i << " ";
			prime[w] = i;
			w++;
		}
	}
	for(int i = 0; i < 205; i++)
	{
		ary[i] = 0;
	}
	
	cin >> n;
	
	for(int k = 1; k <= n; k++)
	{
		string str;
		bool go = false;
		
		cin >> str;
		printf("Case %d: ", k);
		for(int i = 0; i < str.size(); i++)
		{
			ary[str[i]]++;
		}
		for(int i = 0; i < 200; i++)
		{
			if(ary[i] == 0)
			{
				continue;
			}
			for(int j = 0; j <= w; j++)
			{
				if(ary[i] == prime[j])
				{
					cout << char(i);
					go = true;
					break;
				}
			}
		}
		if(go)
		{
			cout << endl;
		}
		else
		{
			cout << "empty" <<endl;
		}
		for(int i = 0; i < 205; i++)
		{
			ary[i] = 0;
		}
	}
	return 0;
}
