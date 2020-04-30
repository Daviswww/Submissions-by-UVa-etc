#include <iostream>
using namespace std;

void FindMax(int A[107][107], int *MinOp, int *MaxScore, int N, int m, int K)
{
	int l = 0, r = 0, op = 0, score = 0;
	for(r = l; r < K && r < N; ++r)
	{
		if(A[r][m] == 1)
		{
			++score;
		}
	}
	
	if(A[l][m] == 1)
	{
		*MinOp = op;
		*MaxScore = score;
	}
	else
	{
		*MinOp = 0;
		*MaxScore = 0;
	}
	
	
	for(int i = 0; i < N; ++i)
	{
		if(A[l][m] == 1 && (score > *MaxScore))
		{
			*MinOp = op;
			*MaxScore = score;
		}
		
		if(A[l][m] == 1)
		{
			--score;
			++op;
		}
		
		++l;
		
		if(r != N)
		{
			if(A[r][m] == 1)
			{
				++score;
			}
			
			++r;			
		}
	}
}

int main()
{
	int N, M, K, A[107][107];
	cin >> N >> M >> K;
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < M; ++j)
		{
			cin >> A[i][j];
		}
	}
	
	int ans_op = 0, ans_score = 0;
	for(int i = 0; i < M; ++i)
	{
		int op, score;
		FindMax(A, &op, &score, N, i, K);
		ans_op += op;
		ans_score += score;
	}
	
	cout << ans_score << " " << ans_op << endl;

    return 0;
}

