#include<iostream>

using namespace std;
const int N = 256;

int main()
{
    int n, ary[N] = {0};
    char ch;
    cin >> n;
    while(n--)
    {
        cin >> ch;
        ary[ch]++;
    }
    if(ary['A'] > ary['D'] )
    {
        cout << "Anton" << endl;
    }
    else if(ary['A'] < ary['D'] )
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    
    return 0;
}