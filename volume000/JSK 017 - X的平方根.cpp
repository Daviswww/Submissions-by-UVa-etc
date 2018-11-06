#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if(n <= 2)
	{
        cout << n << endl;
        return 0;
    }
    long long a = 1, b = 2, c;
    while(--n)
	{
        c = a + b;
        a = b;
        b = c;
    }
    cout << a << endl;
}

