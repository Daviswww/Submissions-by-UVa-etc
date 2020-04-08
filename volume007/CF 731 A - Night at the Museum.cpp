#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	string S;
	cin >> S;
	
	int now = 0, ans = 0;
	for(int i = 0; i < S.length(); ++i)
	{
		int d = (S[i] - 'a' - now >= 0 ? S[i] - 'a' - now : now - (S[i] - 'a'));
		ans += (d < 13 ? d : 26 - d);
		now = S[i] - 'a';
	}
	
	cout << ans << endl;

	return 0;
}
