#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;

    cin >> n >>  str; 

    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'n')
        {
            cout << "1 ";
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'r')
        {
            cout << "0 ";
        }
    }

    puts("");
    return 0;
}