/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }; 
 */


// find left then right and then I recursively construct a tree
class Solution {
public:
  int i=0;
    TreeNode* bstFromPreorder(vector<int>& preorder,int bound= INT_MAX) {
        if(i== preorder.size()|| preorder[i]> bound)
            return NULL;
            
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left= bstFromPreorder(preorder,root->val);
        root->right= bstFromPreorder(preorder,bound);
        
        return root;
        
    }
    
    
};