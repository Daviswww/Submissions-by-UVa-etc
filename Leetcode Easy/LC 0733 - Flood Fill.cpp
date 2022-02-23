#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        const int n = image.size();
        const int m = image[0].size();
        
        r(image, n, m, sr, sc, image[sr][sc], newColor);
        return image;
    }
private:
    void r(vector<vector<int>>& image, int n, int m, int x, int y, int oc, int nc){
        if(x < 0 || y < 0 || x >= n || y >= m) {
            return ;
        }
        if(image[x][y] != oc) {
            return ;
        }
        image[x][y] = nc;
        r(image, n, m, x+1, y, oc, nc);
        r(image, n, m, x-1, y, oc, nc);
        r(image, n, m, x, y+1, oc, nc);
        r(image, n, m, x, y-1, oc, nc);
    } 
};