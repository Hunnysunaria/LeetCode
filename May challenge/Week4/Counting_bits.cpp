
static int speedUp=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> countBits(int num) {
       
    vector<int> res(num+1);
    
        for(int i=1;i<=num;i++)
            res[i]= res[i&(i-1)]+1;
    
    
    return res;}
    
};