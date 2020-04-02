#include <iostream>
using namespace std;

void out(int n)
{
	if(n >= 5)
	{
		n -= 5;
		cout << "-O";
	}
	else
	{
		cout << "O-";
	}
	
	cout << "|";
	
	switch(n)
	{
		case 0:
			cout << "-OOOO";
			break;
		case 1:
			cout << "O-OOO";
			break;
		case 2:
			cout << "OO-OO";
			break;
		case 3:
			cout << "OOO-O";
			break;
		case 4:
			cout << "OOOO-";
			break;
	};
	
	cout << endl;
}

int main()
{
	int N;
	cin >> N;
	
	do
	{
		int digit = N % 10;
		out(digit);
		N /= 10;
	}while(N != 0);

	return 0;
}

