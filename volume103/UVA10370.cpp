#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int n, k;
	
	while( cin >> n )
	{
		double score[1005] = {0};
		for( int i = 0 ; i < n ; i++ )
		{
			cin >> k;
			double x = 0, y = 0;
			for( int j = 0 ; j < k ; j++ )
			{
				cin >> score[j];
				x += score[j];
			}
			x /= k;
			for( int j = 0 ; j < k ; j++ )
			{
				if( score[j] > x ) 
				{
					y++;
				}
			}
			y /= k;
			y *= 100;
			printf( "%.3lf\%\n", y );
		}
	}
  return 0;
}
