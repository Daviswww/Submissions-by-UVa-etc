#include<iostream>
using namespace std;
const int N = 100005;

int main()
{
    int n, q, a[N] = {0}, b[N] = {0}, count = 0;
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }

    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> b[i];
    }
    
    for(int i = 0; i < q; i++) {
        int l = 0, r = n, m = 0;
        while (l <= r)
        {
            m = (r+l) / 2;
            if(a[m] == b[i]){
                count++;
                break;
            }else if(a[m] > b[i]){
                r = m-1;
            }else if(a[m] < b[i]){
                l = m+1;
            }
        }
    }

    cout << count << endl;

    return 0;
}