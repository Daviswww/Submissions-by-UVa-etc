#include <iostream> 
using namespace std;

int main()
{
	int N, M, A[107];
	cin >> N >> M;
	
	int ans = 0, maxi = 0;
	for(int i = 0; i < N; ++i)
	{
		cin >> A[i];
		
		int t = A[i] / M + (A[i] % M == 0 ? 0 : 1);
		if(t >= maxi)
		{
			ans = i + 1;
			maxi = t;
		}
	}
	
	cout << ans << endl;

	return 0;
}
