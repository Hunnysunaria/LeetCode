class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
      
        vector<vector<int>> e;
        
        
        
        int s=0,f=0;
        
        
    while( s< A.size() && f<B.size()){
        
        int l= max(A[s][0] , B[f][0]);
        
        int h= min(A[s][1], B[f][1]);
        
        if(l<= h)
            
            e.push_back({l,h});
        
        
        if(A[s][1]< B[f][1])
            s++;
        else
            f++;
    }
      
        
       
    
        return e;
    }
};


