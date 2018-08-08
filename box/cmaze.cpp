#include<iostream>
#include<Windows.h>
#include<time.h>
#include<cstdio>
#include<cstring>
#include<stack>
#define M 100
#define N 100

using namespace std;
void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}
int main(void)
{
	int map[N][M], n, m, q, w;
	char maze[N][M], name;
	FILE * fp;
	for(int i = 0; i < N; i++)						//Re 1
	{
		for(int j = 0; j < M; j++) 
		{
			map[i][j] = 1;
			maze[i][j] = '1';
		}
	}
	/*
	cin <<  name;
	fp = fopen(name,"r"); 
	*/
 	fp = fopen("maze.txt","r");   
 	if (fp == NULL) printf("Error opening file.");
 	else
 	{
		fscanf(fp,"%d%d",&n, &m);					//Maze
		for(int i = 1; i <= n; i++)
     	{
	       	for(int j = 1; j <= m; j++)
	       	{
			   	fscanf(fp,"%s",&maze[i][j]);		//Map
			   	if(maze[i][j] == 'R' || maze[i][j] =='E')
				{
					map[i][j] = 0;
					if(maze[i][j] == 'R') 
					{
						q = i, w = j;
						maze[i][j] = '0';
					}
				}
			   	if(maze[i][j] == '0'||maze[i][j] == 'K') {map[i][j] = 0;}
			    if(maze[i][j] == '1') {map[i][j] = 1;}
			}
		}
    	fclose (fp);
    }
	for(int j = 0; j <= n; j++)
	{
		maze[j][m+1] = '1';
	}
    int ip = 1, k = 10, x = 0;
    stack<int> a, s;					//Stack
    while(maze[q][w] != 'E')
    {
		gotoxy(0,0);
		if(maze[q][w] == 'K') k += 10;
		//cout << "pow: ";
		//for(int i = 0; i < k; i++) cout << "# ";
		for(int i = 0; i <= n+1; i++)
		{
			for(int j = 0; j <= m+1; j++)
			{
				if(i == q && j==w)cout <<"R ";
				else cout << maze[i][j]<<" ";
			}
			puts("");
		}
		--k, x++;
		Sleep(100);
		//system("cls");
		if(map[q][w+1] == 0)						//East
		{
			a.push(q), s.push(w), w += 1;
			map[q][w] = 1;
			continue;
		}
		else if(map[q+1][w] == 0)					//South
		{
			a.push(q), s.push(w), q += 1;
			map[q][w] = 1;
			continue;
		}
		else if(map[q][w-1] == 0)					//West
		{
			a.push(q), s.push(w), w -= 1;
			map[q][w] = 1;
			continue;
		}
		else if(map[q-1][w] == 0)					//North
		{
			a.push(q), s.push(w), q -= 1;
			map[q][w] = 1;
			continue;
		}
		else										//Re
		{
			q = a.top(), a.pop();
			w = s.top(), s.pop();
		}
		if(a.empty())break;							//Foolproof mechanism
	}
	fp = fopen("position.txt","w"); 
	if(a.empty())fprintf(fp,"NO EXIT!!");				//Foolproof mechanism
	else
	{
		fprintf(fp,"%d %d\n", n, m); 					//Exit
		while (!a.empty())
		{
			fprintf(fp,"%d %d\n",a.top() , s.top()); 	//position
			a.pop(), s.pop();
		}
	}
	fclose (fp);
	//Game over
	char over;
	system("cls");
	fp = fopen("over.txt","r");
	for(int i = 0; i <= 18; i++)
 	{
       	for(int j = 0; j <= 24; j++)
       	{
		   	fscanf(fp,"%s",&over);
		   	if(over == '1') cout << "  ";
		   	else cout << over <<" ";
		}
		puts("");
	}
	fclose (fp);
	puts("");
	cout << "Use # :"<< x <<endl;
    return 0;
} 
