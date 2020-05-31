class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int res=0;
      unordered_set <char>sj(J.begin(), J.end());
        for(int s: S ){
        if(sj.count(s))
            res++;
        }
        return res;
    }
};