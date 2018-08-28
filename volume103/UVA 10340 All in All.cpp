#include<bits/stdc++.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	string s1, s2;
	while( cin >> s1 >> s2 )
	{
		int count = 0, n1 = s1.size(), n2 = s2.size();
		for( int i = 0 ; i < n2 ; i++ )
		{
			if( s1[count] == s2[i]  )
			{
				count++;
			}
			if( count == n1) 
			{
				break;
			}
		}
		if( count == n1 )
		{
			printf( "Yes\n" );
		}
		else
		{
			printf( "No\n" );
		}
	}
	return 0;    
} 
