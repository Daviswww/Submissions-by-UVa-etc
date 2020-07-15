#include<iostream>

using namespace std;
const int N = 2005;
bool dp[N] = {false};
int a[N] = {0}, b[N] = {0};

void build(int sum,int index, int n){
	if(index == n){
		if(sum > 0 && sum < N){
			dp[sum] = true;
		}
	}else{
		build(sum+a[index], index+1, n);
		build(sum, index+1, n);
	}
}

int main()
{
    int n, m, tmp;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    build(0, 0, n);
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> tmp;
        if(dp[tmp]){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}