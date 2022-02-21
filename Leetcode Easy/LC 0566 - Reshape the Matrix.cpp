#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int column = mat[0].size();
        vector<vector<int>> a;
        vector<int> b;
        int pr = 0, pc = 0;
        if(row * column != r * c) return mat;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                b.push_back(mat[i][j]);
                ++pc;
                if(pc == c){
                    pc = 0;
                    a.push_back(b);
                    b.clear();
                }
            }
        }
        return a;
    }
};