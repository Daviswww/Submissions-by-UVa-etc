#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	//ofstream fout;
	//fout.open("ans.txt");
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		int k, x, y, ary[1005];
		cin >> k;
		for(int j = 0; j < k; j++)
		{
			cin >> ary[j];
		}
		cin >> k;
		for(int g = 0; g < k; g++)
		{
			int max = 0;
			cin >> x >> y;
			for(int j = x-1; j <= y-1; j++)
			{
				if(ary[j] > max)
				{
					max = ary[j];
				}
			}
			cout << max << endl;		
		}
	}
	return 0;
}
