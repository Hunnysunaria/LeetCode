class Solution {
public:
    int minDistance(string word1, string word2) {
        int n= word1.size();
        int m = word2.size();
        if(n<1){
            
            return m;
        }
      
        vector<vector<int>> res(n+1, vector<int>(m+1));
        
        for(int i=1;i<=n;i++){
            res[i][0]= i; 
            
            for(int j=1;j<=m ;j++){
     res[0][j]= j;
                
                if(word1[i-1] == word2[j-1]){
                    
                    res[i][j]= res[i-1][j-1];
                    
                    // cout<<"Inside match: "<<word1[j]<<" "<<word2[j]<< res[i][j]<<"\n";
                }
                
                else if (word1[i-1]!= word2[j-1]){
                    
                    
                    res[i][j]= min(res[i-1][j-1], min(res[i-1][j], res[i][j-1]))+1;
                    
                  
                    
//                     cout<<"Inside mismatch  :  "<<res[i][j]<<"\n";
                }
                
               
            }
        }
        
        return res[n][m];
    }
};