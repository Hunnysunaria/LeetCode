/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root== NULL){
            return 0;
        }
        int k;
        k= 1+max(height(root->left),height(root->right));
        return k;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int r,l;
        int c;
        if(root== NULL){
            return 0;
        }
        int rl;
        rl= height(root->left)+height(root->right);
        r= diameterOfBinaryTree(root->right);
      
        l=diameterOfBinaryTree(root->left);
      
        
      
        
        return max(rl,max(r,l));
    }
};