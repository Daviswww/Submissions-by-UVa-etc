#include<iostream>

using namespace std;
const int N = 5;
int main()
{
    int n, ans = 0;;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cin >> n;
            if(n){
                ans = abs(3 - i) + abs(3 - j);
            }
        }
    }

    cout << ans << endl;

    return 0;
}

