/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
        int m= INT_MIN;
        maxSubPathsum(root,m);
        return m;
    }
    
    
    
    int maxSubPathsum(TreeNode * node, int& m){
       
        if(!node)
            return 0;
        
   
            int left= maxSubPathsum(node->left, m);
       
            int right=  maxSubPathsum(node->right, m);
        if(left<0)
            left= 0;
        if(right<0)
            right=0;
        
        
                       m= max(m,  left+ node->val  +right);
                       
                       
                       return  max(left+node->val,right+ node->val);
    }
};