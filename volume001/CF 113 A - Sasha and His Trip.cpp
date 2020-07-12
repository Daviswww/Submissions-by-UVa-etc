#include<bits/stdc++.h>
 
using namespace std;
const int N = 105;
 
int main()
{
	int n, m, ans = 0, a[N]={0};
    
	for(int i = 2; i < N; i++){
		a[i] = a[i-1] + i;
	}
	cin >> n >> m;

	if(n - m >= 1){
		ans += a[n-m] + m;
	}else{
		ans = n - 1;
	}

	cout << ans << endl;

	return 0;
}