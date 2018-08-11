#include<bits/stdc++.h>

using namespace std;

int main()
{
    ofstream fout;
	fout.open("OutputFile.txt");
    int n, ary[10005], k = 0;
    while(cin >> n)
    {
        int i, j;
        for( i = 0; i < k; i++ )
            if( n > ary[i] )
            {
                for( j = k; j >= i; j-- )
                    ary[j] = ary[j-1];
                break;
            }   
        ary[i] = n;
        k++;
        if( k % 2 )
        {
        	cout << ary[k/2] << endl;
		}
        else
        {
        	cout <<( ary[k/2-1] + ary[k/2] ) / 2 << endl;
		} 
    }
    return 0;
}
