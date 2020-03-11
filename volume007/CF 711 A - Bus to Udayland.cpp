#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string Seat[1007];
	
	cin >> N;
	bool sit = false;
	for(int i = 0; i < N; ++i)
	{
		cin >> Seat[i];
		
		if(!sit)
		{
			if(Seat[i][0] == 'O' && Seat[i][1] == 'O')
			{
				Seat[i][0] = '+';
				Seat[i][1] = '+';
				sit = true;
			}
			else if(Seat[i][3] == 'O' && Seat[i][4] == 'O')
			{
				Seat[i][3] = '+';
				Seat[i][4] = '+';
				sit = true;
			}
		}
	}
	
	if(sit)
	{
		cout << "YES" << endl;
		for(int i = 0; i < N; ++i)
		{
			cout << Seat[i] << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}

    return 0;
}

