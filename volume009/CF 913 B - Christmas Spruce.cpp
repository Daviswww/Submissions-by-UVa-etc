#include <iostream>
using namespace std;

struct Node
{
	int parent;
	int sub_leaf;
	bool is_leaf;
};

int main()
{
	int N;
	Node tree[1007];
	
	cin >> N;
	tree[1].parent = 0;
	tree[1].sub_leaf = 0;
	tree[1].is_leaf = true;
	for(int i = 2; i <= N; ++i)
	{
		cin >> tree[i].parent;
		tree[i].sub_leaf = 0;
		tree[i].is_leaf = true;
	}
	
	bool is_spruce = true;
	for(int i = N; i > 0; --i)
	{
		tree[tree[i].parent].is_leaf = false;
		
		if(tree[i].is_leaf)
		{	
			++tree[tree[i].parent].sub_leaf;
		}
		else if(tree[i].sub_leaf < 3)
		{
			is_spruce = false;
			break;
		}
	}
	
	if(is_spruce)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}

