#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	cin >> n;
	
	for(int now = 0; now < n; now++)
	{
		int k, ary[50];
		
		cin >> k;
		for(int j = 0; j < k; j++)
		{
			cin >> ary[j];
		}
		int swp = 0;
		for(int h = 0; h < k; h++)
		{
			for(int g = h; g < k; g++)
			{
				if(ary[h] > ary[g])
				{
					int box;
					box = ary[g];
					ary[g] = ary[h];
					ary[h] = box;
					swp++;
				}
			}
		}
		for(int i = 0; i < k; i++)
		{
			cout << ary[i] <<" ";
		}
		cout << "Optimal train swapping takes "<< swp <<" swaps."<<endl;
	}
	return 0;
}
 
