class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        
        int last_index=0;
        
        for(int i=0;i<= last_index;++i){
            
            if(i== n-1){
                return true;
            }
            last_index= max(last_index, i+nums[i]);
        }
        return false;
        
    }
};