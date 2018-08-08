/*
input
3
10 10 2 Jill
5 3 10 Will
5 5 10 Bill
4
2 4 10 Cam
4 3 7 Sam
8 11 1 Graham
6 2 7 Pam
-1
output
Bill took clay from Will.
Graham took clay from Cam.
*/
#include<iostream>

using namespace std;

int main()
{
	int n;
	
	while(cin >> n)
	{
		if(n == -1) 
		{
			break;
		}
		else
		{
			int max = 0, min = 250;
			string maxn, minn;
			for(int i = 0; i < n ;i ++)
			{
				int a, b, c, sum;
				string str;
				cin >> a >> b >> c >> str;
				sum = a * b * c;
				
				if(sum > max)
				{
					max = sum;
					maxn = str;
				}
				if(sum < min)
				{
					min = sum;
					minn = str;
				}
			}
			cout << maxn <<" took clay from "<< minn <<"." << endl;	
		}
	}
	return 0;
} 
