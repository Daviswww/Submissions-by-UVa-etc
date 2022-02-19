#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 2, c = 3;
        if(n == 1){
            return a;
        }else if(n == 2){
            return b;
        }else if(n == 3){
            return c;
        }
        for(int i = 0; i < n-2; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};