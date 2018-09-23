#include<bits/stdc++.h>
#define check(n) n % 2 == 1 ? (ht[0] = 'A', ht[1] = 'B', ht[2] = 'C'):(ht[0] = 'A', ht[1] = 'C', ht[2] = 'B')
#define cv(i) (i & i - 1) % 3
#define vc(i) ((i | i - 1) + 1) % 3
using namespace std;

int main(void)
{
	int n;
	char ht[3];
	cout << "Quantity : ";
	cin >> n;
	check(n);
	stack<int> A, B, C;
	for(int i = n; i > 0; i--)
	{
		A.push(i);
	}
	int i = 1;
	while(i != pow(2, n))
	{
		int go = cv(i), to = vc(i);
		if(ht[go] == 'A')
		{
			if(ht[to] == 'B')
			{
				B.push(A.top());
			}
			else
			{
				C.push(A.top());
			}
			printf("%c(%d)->%c\n", ht[go], A.top(), ht[to]);
			A.pop();
		}
		else if(ht[go] == 'B')
		{
			if(ht[to] == 'A')
			{
				A.push(B.top());
			}
			else
			{
				C.push(B.top());
			}
			printf("%c(%d)->%c\n", ht[go], B.top(), ht[to]);
			B.pop();
		}
		else
		{
			if(ht[to] == 'A')
			{
				A.push(C.top());
			}
			else
			{
				B.push(C.top());
			}
			printf("%c(%d)->%c\n", ht[go], C.top(), ht[to]);
			C.pop();
		}
		i++;
	}
	return 0;
}
