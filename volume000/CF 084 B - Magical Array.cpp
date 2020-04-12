#include<iostream>

using namespace std;
const int N = 100005;

int main()
{
    long long n, ary[N] = {0}, m[N] = {0}, count = 1, ans = 0;

    for(int i = 1; i < N; i++)
    {
        ary[i] = ary[i-1] + i;
    }
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(m[i] == m[i+1])
        {
            count++;
        }
        else
        {
            ans += ary[count];
            count = 1;
        }
    }
    if(m[n-1] == 0)
    {
        ans += ary[count-1];
    }
    cout << ans << endl;

    return 0;
}

