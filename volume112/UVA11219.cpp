#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	cin >> n;

	for(int g = 1; g <= n; g++)
	{
		char c;
		int d1, m1, y1, d2, m2, y2, ye;
		
		cin >> d1 >> c >> m1 >> c >> y1;
		cin >> d2 >> c >> m2 >> c >> y2;
		printf("Case #%d: ", g);
		
		if(y2 > y1)
		{
			printf("Invalid birth date\n");
		}
		else if(y2 == y1)
		{
			if(m2 > m1)
			{
				printf( "Invalid birth date\n" );
			}
			else if( m2 == m1)
			{
				if( d2 > d1 ) 
				{
					printf( "Invalid birth date\n" );
				}
				else
				{
					printf( "0\n" );
				}
			}
			else
			{
				printf( "0\n" );
			}
		}
		else
		{
			if( m2 > m1 )
			{
				if( y1-y2-1 > 130 ) 
				{
					printf( "Check birth date\n" );
				}
				else
				{
					printf( "%d\n", y1-y2-1 );
				}
			} 
			else if(m2 == m1)
			{
				if( d2 > d1)
				{
					if( y1 - y2 - 1 > 130 )
					{
						printf( "Check birth date\n" );
					}
					else
					{
						printf( "%d\n", y1 - y2 - 1 );
					}
				}
				else
				{
					if( y1-y2 > 130 )
					{
						printf( "Check birth date\n" );
					}
					else
					{
						printf( "%d\n", y1 - y2);
					}
				}
			}
			else
			{
				if( y1 - y2 > 130 ) 
				{
					printf( "Check birth date\n" );
				}
				else
				{
					printf( "%d\n", y1 - y2);
				}
			}
		}
	}

	return 0;
} 
