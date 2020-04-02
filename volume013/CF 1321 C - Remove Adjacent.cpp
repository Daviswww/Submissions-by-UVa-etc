#include <iostream>
#include <string>
using namespace std;

bool Removeable(string str, int n)
{
	return ((n == 0 && str[n +1 ] == str[n] - 1) || 
	        (n == str.length() - 1 && str[n - 1] == str[n] - 1) || 
			(str[n - 1] == str[n] - 1 || str[n + 1] == str[n] - 1));
}

int main()
{
	int S;
	string str;
	cin >> S >> str;
	
	int ans = 0;
	char target = 'z';
	bool cont;
	while(target != 'a')
	{		
		do
		{
			cont = false;
			
			for(int i = 0; i < str.length(); ++i)
			{
				if(str[i] == target && Removeable(str, i))
				{
					str.erase(i, 1);
					++ans;
					cont = true;
				}
			}			
		}while(cont);
		
		--target;
	}
	
	cout << ans << endl;

    return 0;
}

