#include<iostream>

using namespace std;
const int N = 10005;

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

    for(int i = 0; i < q; i++){
        for(int j = 0; j < n; j++){
            if(b[i] == a[j]){
                count++;
                break;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}