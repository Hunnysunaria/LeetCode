class Solution {
public:
    int singleNonDuplicate(vector<int>& nums){
        
        int mid;
        int left= 0;int right = nums.size()-1;
        while(left<right){
            
         mid= left+ (right-left)/2;
            if(nums[mid]== nums[mid^1]){
                left= mid+1;
            }
                else{                   
                    
                    right= mid;}
        }
        return nums[left];
    }
    
};