#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	while(cin >> n && n >= 0)
	{
		int temp = n, ary[105], k = 0;
		
		while(temp)
		{
			ary[k++] = temp % 3;
			temp /= 3;
		}
		if(k == 0)
		{
			cout << "0" << endl; 
		}
		else
		{
			for(int i = k - 1; i >= 0; i--)
			{
				cout << ary[i];
			}
			cout << endl;
		}
	}
	return 0;
}

