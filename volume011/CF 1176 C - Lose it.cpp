#include<iostream>

using namespace std;
int sequence_index(int i);
int main()
{
	int n ;
	cin >> n;
	int sequence_count[6] = {0};
	
	for(int i = 0;i<n;i++)
	{
		int input;
		cin >> input;
		int index = sequence_index(input);
		if(index!=-1)
		{
			if(index == 0)
			{
				sequence_count[index]++;
			}
			else if(sequence_count[index-1] > 0)
			{
				sequence_count[index-1]--;
				sequence_count[index]++;
			}
		}
	}
	
	cout << n-sequence_count[5]*6<<endl;
	return 0;
}

int sequence_index(int i)
{
	switch(i)
	{
		case 4 :
			return 0;
		case 8 :
			return 1;
		case 15 :
			return 2;
		case 16 :
			return 3;
		case 23 :
			return 4;
		case 42 :
			return 5;
	}
	return -1;
}
