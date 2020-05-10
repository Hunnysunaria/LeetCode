class Solution {
public:
    int findComplement(int num) {
       unsigned msk= ~0;
        while(num & msk)
            msk <<=1;
        
        return ~msk^num;
        
    }
};