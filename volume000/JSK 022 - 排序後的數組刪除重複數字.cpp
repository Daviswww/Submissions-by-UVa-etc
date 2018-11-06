#include<iostream>

using namespace std;

int main()
{
	int ary[200000] = {0}, n;	
	
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		ary[temp+100000]++;	// temp < 0
	}
    int ans = 0;
	for(int i = 0; i < 200000; i++)
	{
		if(ary[i] >= 2)
		{
			ans += 2;
		}
		else
		{
			ans += ary[i];
		}
	}
	cout << ans << endl;
	
	return 0;
} 
