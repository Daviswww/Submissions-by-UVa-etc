#include<iostream>

using namespace std;

int main()
{
    int n, h, k, ans = 0;
    
    cin >> n >> h;

    for(int i = 0; i < n; i++)
    {
        cin >> k;
        if(h >= k)
        {
            ans++;
        }
        else
        {
            ans += 2;
        }
    }

    cout << ans << endl;

    return 0;
}

