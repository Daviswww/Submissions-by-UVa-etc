#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    const int n = s.length();
    int ans = 0;
    vector<int> dp(128, -1);
    for (int i = 0, j = 0; j < n; j++) {
      i = max(i,dp[s[j]] + 1);
      ans = max(ans, j - i + 1);      
      dp[s[j]] = j;
    }
    return ans;
    }
};