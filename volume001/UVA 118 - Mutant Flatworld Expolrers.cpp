#include<bits/stdc++.h>
#define MAXN 55

using namespace std;
const char op[] = {'W', 'N', 'E', 'S'};
int main()
{
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	int y, x, nx, ny, ip;
	string str;
	char direction;
	int m[MAXN][MAXN];
	memset (m, 0, sizeof(m));
	cin >> y >> x;
	x += 1;
	y += 1;
	while(cin >> ny >> nx >> direction)
	{
		nx += 1;
		ny += 1;
		bool go = true;
		if(direction == 'W')
		{
			ip = 0;
		}
		else if(direction == 'N')
		{
			ip = 1;
		}
		else if(direction == 'E')
		{
			ip = 2;
		}
		else
		{
			ip = 3;
		}
		cin >> str;
		
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] != 'F')
			{
				if(str[i] == 'L')
				{
					ip = (ip + 3) % 4;
					direction = op[ip];
				}
				else
				{
					ip = (ip + 5) % 4;
					direction = op[ip];
				}
				//printf("%c", direction);
			}
			else
			{
				switch(direction)
				{
					case 'E':
						if(ny + 1 > y && m[ny+1][nx] == 0)
						{
							m[ny+1][nx] = 1;
							go = false;
							break;
						}
						if(m[ny+1][nx] == 0)
						{
							ny += 1;
						}
						break;
					case 'N':
						if(nx + 1 > x && m[ny][nx+1] == 0)
						{
							m[ny][nx+1] = 1;
							go = false;
							break;
						}
						if(m[ny][nx + 1] == 0)
						{
							nx += 1;
						}
						break;
					case 'W':
						if(ny - 1 < 1 && m[ny-1][nx] == 0)
						{
							m[ny-1][nx] = 1;
							if(ny == y)
							{
								m[ny][nx] = 1;
							}
							go = false;
							break;
						}
						if(m[ny-1][nx] == 0)
						{
							ny -= 1;
						}			
						break;
					case 'S':
						if(nx - 1 < 1 && m[ny][nx-1] == 0)
						{
							m[ny][nx-1] = 1;
							go = false;
							break;
						}
						if(m[ny][nx-1] == 0)
						{
							nx -= 1;
						}
						break;
				}			
			}	
			if(!go)
			{
				if(ny == 1 && nx == 1)
				{
					m[ny][nx-1] = 1;
					m[ny-1][nx] = 1;
				}
				else if(ny == y && nx == x)
				{
					m[ny][nx+1] = 1;
					m[ny+1][nx] = 1;
				}
				else if(ny == y && nx == 1)
				{
					m[ny][nx-1] = 1;
					m[ny+1][nx] = 1;
				}
				else if(ny == 1 && nx == x)
				{
					m[ny][nx+1] = 1;
					m[ny-1][nx] = 1;
				}
				break;
			}
		}
		if(go)
		{
			printf("%d %d %c\n", ny-1, nx-1, direction);
			fprintf(fo, "%d %d %c\n", ny-1, nx-1, direction);
		}
		else
		{
			printf("%d %d %c LOST\n", ny-1, nx-1, direction);
			fprintf(fo, "%d %d %c LOST\n", ny-1, nx-1, direction);
		}
	}
	return 0;
}
