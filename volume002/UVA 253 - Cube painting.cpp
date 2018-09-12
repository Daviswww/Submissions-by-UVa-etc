#include<bits/stdc++.h>

using namespace std;
const int AllRoll[24][6] = {
        {0, 1, 2, 3, 4, 5},
        {0, 1, 3, 4, 5, 2},
        {0, 1, 5, 2, 3, 4},
        {0, 1, 4, 5, 2, 3},
        {1, 0, 4, 3, 2, 5},
        {1, 0, 3, 2, 5, 4},
        {1, 0, 2, 5, 4, 3},
        {1, 0, 5, 4, 3, 2},
        {4, 2, 0, 3, 1, 5},
        {4, 2, 3, 1, 5, 0},
        {4, 2, 1, 5, 0, 3},
        {4, 2, 5, 0, 3, 1},
        {2, 4, 1, 3, 0, 5},
        {2, 4, 3, 0, 5, 1},
        {2, 4, 0, 5, 1, 3},
        {2, 4, 5, 1, 3, 0},
        {5, 3, 2, 0, 4, 1},
        {5, 3, 0, 4, 1, 2},
        {5, 3, 4, 1, 2, 0},
        {5, 3, 1, 2, 0, 4},
        {3, 5, 2, 1, 4, 0},
        {3, 5, 1, 4, 0, 2},
        {3, 5, 4, 0, 2, 1},
        {3, 5, 0, 2, 1, 4}
    };
int main(void) {
	string str, a, b;
	
	while (cin >> str)
	{
		bool go = true;
		for(int i = 0;i < 6; i++)
		{
			a[i] = str[i];
		}
		for(int j = 0, i = 6;i < str.size(); j++, i++)
		{
			b[j] = str[i];
		}
		for(int i = 0; i < 24; i++)
		{
			go = true;
			for(int j = 0; j < 6; j++)
			{
				if (a[j] != b[AllRoll[i][j]])
				{
					go = false;
					break;
				}
			}
			if (go)
			{
				break;
			}
		}
		if (go)
		{
			cout << "TRUE" << endl;
		}
		else 
		{
			cout << "FALSE" << endl;
		}
	}
    return 0;
}
