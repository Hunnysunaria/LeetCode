class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        
//         DP solution 1
        
//         int maxi=0;
//         int m= matrix.size();
//         int n= matrix[0].size();
//          vector<vector<int>> c(m, vector<int>(n, 0));
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
                
//                 if(i==0 || j==0|| matrix[i][j] == '0')
//                 {   c[i][j]=matrix[i][j]-'0';
//                 }
                
//                 else{
//                     c[i][j]= min(c[i-1][j-1], min(c[i][j-1],c[i-1][j]))+1;
//                 }
                
//                 maxi= max(c[i][j],maxi);
                
//         }
//         }
//         return maxi*maxi;
        
        
        
               if (matrix.empty()) {
            return 0;
        }
        int m = matrix.size(), n = matrix[0].size(), maxi = 0, prev;
        vector<int> cur(n, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int temp = cur[j];
                if (i==0 || j==0 || matrix[i][j] == '0') {
                    cur[j] = matrix[i][j] - '0';
                } else {
                    cur[j] = min(prev, min(cur[j], cur[j - 1])) + 1;
                }
                maxi = max(cur[j], maxi);
                prev = temp;
            }
        }
        return maxi * maxi;
    }
        
        
        
        
    
};