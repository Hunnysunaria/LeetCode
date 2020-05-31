class Solution {
public:
        
    vector<vector<int>> kClosest(vector<vector<int>>& pts, int k) {
        
      multimap<int,int> mp;
        for(int i=0;i<pts.size();i++){
            int c= pts[i][0]*pts[i][0]+pts[i][1]*pts[i][1];
            mp.insert({c,i});
        }
        
        vector<vector<int>> v;
        
        for(auto it= mp.begin();k>0;++it,k--)
            
            v.push_back(pts[it->second]);
        
        return v;
        
            
        
    }
};