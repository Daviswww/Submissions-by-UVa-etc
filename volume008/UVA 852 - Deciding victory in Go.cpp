#include <bits/stdc++.h>

using namespace std;

string s[9];

int sum;
int flag;

int DFS(int i, int j)
{
	if(i < 0 || i >= 9 || j < 0 || j >= 9) 
					   return 0;
	if(s[i][j] == 'O') return 1;
	if(s[i][j] == 'X') return 2;
	if(s[i][j] == '#') return 0;
	
	s[i][j] = '#';
	
	sum++;
	
	flag |= DFS(i-1, j);
	flag |= DFS(i+1, j);
	flag |= DFS(i, j-1);
	flag |= DFS(i, j+1);
	
	return flag;
}

int main()
{
	//ofstream fout;
	//fout.open("sum.txt");
	int n;
	cin >> n;
	getchar();
	while(n--)
	{
	
		for(int i = 0; i < 9; i++)
		{
			getline(cin, s[i]);
		}
		int black = 0, white = 0;
		
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
			{
				
				flag = 0;
				sum = 0; 
				if(s[i][j] == '.') DFS(i, j);
				
				if(flag == 1) white += sum;
				if(flag == 2) black += sum;
				
				if(s[i][j] == 'X') black++;
				if(s[i][j] == 'O') white++;
			}
		}
		
		/*
		for(int j = 0; j < 9; j++)
		{
			cout << s[j] << endl;
		}
		*/
		printf("Black %d White %d\n", black, white);
		//fout << "Black " << black <<  " White " <<  white << endl; 
	}
	return 0;
}

