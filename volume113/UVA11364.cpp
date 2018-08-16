#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	for(int g = 0; g < n; g++)
	{
		int k, max = 0, min = 100, temp;
		
		cin >> k;
		for(int i = 0; i < k; i++)
		{
			cin >> temp;
			
			if(temp > max)
			{
				max = temp;
			}
			if(temp < min)
			{
				min = temp;
			}
		}
		printf("%d\n", (max - min) * 2);
	}
	return 0;
}

