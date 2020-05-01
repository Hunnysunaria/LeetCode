class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_arr= nums[0];
        int current_max= nums[0];
        
        for(int i=1;i<nums.size();i++){
            current_max= max(nums[i],current_max+nums[i]);
            max_arr = max(max_arr, current_max);
            
        }
        return max_arr;
    }
};