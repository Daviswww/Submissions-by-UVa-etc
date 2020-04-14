#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string Stone;
	
	cin >> N >> Stone;
	
	int ans = 0;
	for(int i = 1; i < Stone.length(); ++i)
	{
		if(Stone[i] == Stone[i - 1])
		{
			Stone.erase(i, 1);
			++ans;
			--i;
		}
	}
	
	cout << ans << endl;

	return 0;
}
