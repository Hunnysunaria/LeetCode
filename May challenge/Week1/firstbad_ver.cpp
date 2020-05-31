// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
   int lft= 1;
        int rght= n;
        while(lft < rght){
        int mid= lft + (rght-lft)/2;
        
        if(isBadVersion(mid)){
            rght= mid;
        }
        else{
            lft= mid+1;
        }
        }
        return lft;
    }
};