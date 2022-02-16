#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a = {0, 0};
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if((nums[i] + nums[j]) == target){
                    a[0] = i;
                    a[1] = j;
                }
            }
        }
        return a;
    }
};