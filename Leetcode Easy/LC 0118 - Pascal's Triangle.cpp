#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        vector<int> b;
        a.push_back({1});
        if(numRows == 1) {
            return a;
        }
        a.push_back({1, 1});
        if(numRows == 2) {
            return a;
        }
        for(int i = 2; i < numRows; i++){
            b.resize(i+1, 1);
            for(int j = 1; j < i; j++){
                b[j] = a[i-1][j-1] + a[i-1][j];
            }
            a.push_back(b);
            b.clear();
        }
        
        
        return a;
    }
};