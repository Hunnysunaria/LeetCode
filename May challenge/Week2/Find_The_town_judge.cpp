class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
//         insertion of 2d vector into map
        map <int ,vector<int> > mp;
        
        if(trust.empty())
            return N;
        
        
    for(int i=0;i<trust.size();i++){
        mp[trust[i][0]].push_back(trust[i][1]);
    }
        
       bool f= false;
        int ans, k;
        for(int i=0;i<trust.size();i++){
            
            if(mp.find(trust[i][1]) == mp.end())
            {
                k++;
                ans= trust[i][1];
                f= true;
            }
        }
        
        if(f== true && k== N-1)
            return ans;
      
        return -1;
    }
};