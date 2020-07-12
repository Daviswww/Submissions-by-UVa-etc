#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int N = 200005;

int main()
{
    long long n, tmp, a[N] = {0}, profit = -1e9;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    tmp = a[0];
    for(int i = 1; i < n; i++){
        profit = max(profit, a[i]-tmp);
        tmp = min(tmp, a[i]);
    }
    cout << profit << endl;

    return 0;
}