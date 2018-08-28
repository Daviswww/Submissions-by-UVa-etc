#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++ )
    {
        double x, k;
        bool go = false;
        cin >> x >> k;
        double p = 0, q = 0, xkfloor = floor(x/k), xkceil = ceil(x/k);
        
        while(!go)
        {
        	for(q = 0; p * xkfloor + q * xkceil <= x && !go; q++ )
        	{
                if( p * xkfloor + q * xkceil == x )
                {
                	go = true;
				}  		
			}
			p++;
		}
        printf( "%.0lf %.0lf\n", --p, --q);
    }
    
    return 0;
}
