#include<iostream>
#include<cstdio>
#include<cmath>
  
using namespace std;
const int N = 10000005;
long long a[N] = {0};
int main() {
    int n, m;
    long long l, r, num, sum = 0, tmp = 0;
    cin >> n >> m;

    for(int i = 0 ; i < m; i++){
        cin >> l >> r >> num;
        a[l] += num;
        a[r+1] -= num;
    }
    for(int i = 0; i <= n; i++){
        tmp += a[i];
        sum = max(tmp, sum);
    }
    cout << sum << endl;
    return 0;
}

