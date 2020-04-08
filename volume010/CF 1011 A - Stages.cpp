#include <iostream> 
#include <string> 
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	char S[64];
	cin >> N >> K >> S;

	sort(S, S + N);
	
	int now = -10, ans = 0, pick = 0;
	for(int i = 0; i < N && pick < K; ++i)
	{
		if(S[i] - 'a' + 1 - now >= 2)
		{
			ans += S[i] - 'a' + 1;
			now = S[i] - 'a' + 1;
			++pick;
		}
	}
	
	cout << (pick == K ? ans : -1) << endl;

	return 0;
}
