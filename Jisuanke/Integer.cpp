#include<iostream> 

using namespace std;

int main()
{
	int a, b, c, sum = 0;
	
	while(cin >> a >> b)
	{
		if(a % b == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
