// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0, r = n, m;
        
        while(l < r){
            m = (long(l) + long(r)) / 2;
            if(isBadVersion(m)){
                r = m;
            }else{
                l = m + 1;
            }
        }
        return r;        
    }
};