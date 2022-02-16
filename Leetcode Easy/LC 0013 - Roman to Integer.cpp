#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int a[300] = {0}, n = s.size(), num = 0;
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;
        num = a[s[n-1]];
        if(s.size() == 1){
            return a[s[0]];
        }
        for(int i = n-2; i >= 0; i--){
            if(a[s[i]] < a[s[i+1]]){
                num -= a[s[i]];
            }else{
                num += a[s[i]];
            }
        }
        return num;
    }
};