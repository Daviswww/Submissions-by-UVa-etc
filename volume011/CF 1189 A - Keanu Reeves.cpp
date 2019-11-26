#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c[2] = {0, 0};
    string s;
    
    cin >> n >> s;
    
    for (int i = 0; i < n; i++){
        c[s[i] - '0']++;
    }
    
    if (c[0] == c[1])
        cout << "2\n" << s[0] << ' ' << s.substr(1, n - 1);
    else
        cout << "1\n" << s;
    
	return 0;
} 
