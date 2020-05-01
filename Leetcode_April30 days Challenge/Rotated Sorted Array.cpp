class Solution {
public:
    int search(vector<int>& nums, int t) { 
        
  
        
              int hi = nums.size()-1, lo = 0, mid;
        while(lo <= hi) {
            mid = (lo+hi)>>1;
            if(nums[mid] == t) return mid;
            if(t < nums[0]) {
                if(nums[mid] < t || nums[mid] >= nums[0]) lo = mid+1;
                else hi = mid-1;
            } else {
                if(nums[mid] < nums[0] || nums[mid] > t) hi = mid-1;
                else lo = mid+1;
            }
        }
        return -1;
    }
    
   
};