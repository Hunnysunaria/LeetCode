class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int tmp;
        for(int i=0;i<nums.size();i++){
        if(nums[i] != 0)
        {
           nums[tmp++]= nums[i];
        }
    }
        while(tmp<nums.size()){
            nums[tmp++]= 0;
        }
            
        
        
        
     
    }
};