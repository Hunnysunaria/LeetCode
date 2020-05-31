

static int speedUp=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int i;
        int s;
        
        
        int mx=0;
unordered_map<int,int> mp;
      mp[0]=-1;
        
        for( i=0;i<nums.size();i++){
           
             s=  (nums[i]== 0)?-1:1;
            sum= sum+s;
     if(mp.find(sum)!= mp.end()){
         
         mx= max(mx,i-mp[sum]);
     }
            
            else{
                mp[sum]=i;
            }
    }
        return mx;
        
        
    }
};