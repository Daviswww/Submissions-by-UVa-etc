#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, c;
        for(int i = 0; i < n-1; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};