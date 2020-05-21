class Solution {
public:
     int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size(),i=0,j=0,res=0;
        vector<vector<int>> dp(m,vector<int>(n,0));
       
//          first entering border elements into dp
         for(i=0;i<m;i++) dp[i][0]=matrix[i][0];
        for(j=0;j<n;j++) dp[0][j]=matrix[0][j];
        
//          then entering the remaining element 
         for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==1) dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
                else dp[i][j]=0;
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++) res+=dp[i][j];
        }
        return res;
    }
    
};