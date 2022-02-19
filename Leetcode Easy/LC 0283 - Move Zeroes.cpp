#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), j = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] != 0) {
                if(i != j){
                    nums[j] = nums[i];
                    nums[i] = 0; 
                }
                j++;
            }
        }
        
    }
};