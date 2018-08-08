#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(void)
{
	int x[5], tom;
	
	cin >> x[0] >> x[1] >> x[2] >> x[3] >>x[4];
	
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(x[i] < x[j] && j != i)
			{
				tom = x[j];
				x[j] = x[i];
				x[i] = tom;
			}
		}
	}
	int k = 0;
	if(x[0] + x[1] > x[4]) k++;
	if(x[0] + x[2] > x[4]) k++;
	if(x[0] + x[3] > x[4]) k++;
	if(x[1] + x[2] > x[4]) k++;
	if(x[1] + x[3] > x[4]) k++;
	if(x[2] + x[3] > x[4]) k++;
	
	if(x[0] + x[1] > x[3]) k++;
	if(x[0] + x[2] > x[3]) k++;
	if(x[1] + x[2] > x[3]) k++;

	if(x[0] + x[1] > x[2]) k++;
	
	cout << k;
	
	return 0;
} 
