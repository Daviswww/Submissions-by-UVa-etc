#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1, sum;
        vector<int> ans = {0, 0};
        while(l != r){
            sum = numbers[l] + numbers[r];
            if(sum > target){
                --r;
            }else if(sum < target) {
                ++l;
            }else{
                return {l+1, r+1};
            }
        }
        return {0, 0};
    }
};