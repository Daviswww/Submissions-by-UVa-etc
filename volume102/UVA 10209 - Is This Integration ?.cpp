#include<bits/stdc++.h>
#define PI 2.0*acos(0.0)
using namespace std;

int main()
{
    ofstream fout;
	fout.open("OutputFile.txt");
	double n;
	
	while(cin >> n)
	{
        double x, y, z, k;
        k =  n * n * PI / 6 - n  * n * sqrt(3.0) / 4;
        z =  n * n - n  * n * PI / 4;
        z -= n * n * PI / 4 - n  * n * PI / 6 - k;
        y =  n * n - n  * n * PI / 4 - 2  * z;
        x =  n * n - 4  * y - 4  * z;
        printf( "%.3lf %.3lf %.3lf\n", x, 4 * y, 4 * z); 
	}
	return 0;
}
