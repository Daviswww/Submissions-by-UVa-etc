#include <iostream>
#include <set>
using namespace std;
 
set<int> xd;
 
bool is_same_digit(int n)
{
	while(n != 0)
	{
		if(xd.find(n % 10) != xd.end())
		{
			return true;
		}
		
		n /= 10;
	}
	
	return false;
}
 
int main()
{
	int X, ans = 0, t;
	
	cin >> X;
	
	xd.clear();
	t = X;
	while(t != 0)
	{
		xd.insert(t % 10);
		t /= 10;
	}
	
	for(int i = 1; i * i <= X; ++i)
	{
		if(X % i == 0)
		{
			if(is_same_digit(i))
			{
				++ans;
			}
			
			if(X / i != i && is_same_digit(X / i))
			{
				++ans;
			}
		}
	}
	
	cout << ans << endl;
 
    return 0;
}
 
