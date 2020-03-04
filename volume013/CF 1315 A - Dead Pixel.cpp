
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t, n, m, q, w, e, r;
	
	cin >> t;
 
	while(t--)
	{
		int tmp, tmp1, tmp2;
		
		cin >> q>> w>> e>> r;
		
		tmp1 = q*min(r+1, w-r);
		tmp2 = w*min(e+1, q-e);
		tmp = min(tmp1, tmp2);
		cout << max((q*w)- tmp, 1)<< endl;
	}
	return 0;	
}