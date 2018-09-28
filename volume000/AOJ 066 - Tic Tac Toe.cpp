#include<bits/stdc++.h>

using namespace std;
const int ary[10][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{1, 4, 7},
		{2, 5, 8},
		{3, 6, 9},
		{1, 5, 9},
		{3, 5, 7}};
int main()
{
	string str;
	
	while(cin >> str)
	{
		bool go = false;
		for(int i = 0; i < 8; i++)
		{
			if(str[ary[i][0]-1] != 's' && str[ary[i][0]-1] == str[ary[i][1]-1] && str[ary[i][1]-1] == str[ary[i][2]-1])
			{
				printf("%c\n", str[ary[i][0]-1]);
				break;
			}
			if(i == 7)
			{
				printf("d\n");
			}
		}
	}
	return 0;
}
