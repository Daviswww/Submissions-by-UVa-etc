//https://uva.onlinejudge.org/external/100/10018.pdf
#include<bits/stdc++.h>

using namespace std;
int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int n;
	
	cin >> n;
	while(n--)
	{
		long long temp, x = 0, y = 0, count = 0;
		
		cin >> temp;
		while(true)
		{
			x = temp;
			while(true)
			{
				y += temp % 10;
				temp /= 10;
				if(temp == 0) 
				{
					break;
				}
				else
				{
					y *= 10;
				}
			}
			if(x != y || count == 0)
			{
				temp = x + y;
				y = 0;
				count++;					
			}
			else
			{
				break;
			}
		}
		cout << count <<" " << y << endl;
	}
	return 0;
}
