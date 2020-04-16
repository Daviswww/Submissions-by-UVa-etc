#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, S, E, n_maxi = 0, n_mini = 2e9, m_maxi = 1, m_mini = 2e9;
	
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> S >> E;
		if(S > n_maxi)
		{
			n_maxi = S;
		}
		if(E < n_mini)
		{
			n_mini = E;
		}
	}
	
	cin >> M;
	for(int i = 0; i < M; ++i)
	{
		cin >> S >> E;
		if(S > m_maxi)
		{
			m_maxi = S;
		}
		if(E < m_mini)
		{
			m_mini = E;
		}
	}
	
	int a = n_maxi - m_mini, b = m_maxi - n_mini;
	int ans = (a < b ? b : a);
	cout << (ans > 0 ? ans : 0) << endl;

    return 0;
}

