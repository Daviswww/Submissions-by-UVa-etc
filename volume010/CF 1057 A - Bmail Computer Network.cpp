#include <iostream>
using namespace std;

int tree[200007];

void out(int p)
{
	if(p == 0)
	{
		return;
	}
	out(tree[p]);
	cout << p << " ";
}

int main()
{
	int N;
	tree[1] = 0;
	
	cin >> N;
	for(int i = 2; i <= N; ++i)
	{
		cin >> tree[i];
	}
	
	out(tree[N]);
	cout << N << endl;

	return 0;
}

