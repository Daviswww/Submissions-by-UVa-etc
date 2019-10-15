#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	int N, L[2] = {1024, -1}, R[2] = {1024, -1};
	string str;
	
	cin >> N >> str;
	for(int i = 0; i < N; ++i)
	{
		if(str[i] == 'L')
		{
			if(i < L[0])
			{
				L[0] = i;
			}
			
			if(i > L[1])
			{
				L[1] = i;
			}
		}
		
		if(str[i] == 'R')
		{
			if(i < R[0])
			{
				R[0] = i;
			}
			
			if(i > R[1])
			{
				R[1] = i;
			}
		}
	}
	
	if(L[0] != 1024 && R[0] != 1024)
	{
		cout << R[0] + 1 << " " << R[1] + 1 << endl;
	}
	else if(L[0] != 1024)
	{
		cout << L[1] + 1 << " " << L[0] << endl;
	}
	else if(R[0] != 1024)
	{
		cout << R[0] + 1 << " " << R[1] + 2 << endl;
	}
 
    return 0;
}
 
