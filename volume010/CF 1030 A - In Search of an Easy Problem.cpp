#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, tmp;
	bool go = true;
	cin >> n;
	
	while(n--)
	{
		cin >> tmp;
		if(tmp)
		{
			go = false;	
		} 
	}
	if(go)
	{
		cout << "EASY" << endl;
	}
	else
	{
		cout << "HARD" << endl;
	}
	return 0;
}
