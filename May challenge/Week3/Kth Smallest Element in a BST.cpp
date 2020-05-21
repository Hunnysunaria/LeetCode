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
     vector<int>v;
   
    void inorder(TreeNode* root){
         int c;
        if(root == NULL){
            return ;}
      
        else {
         inorder(root->left);
       c= root->val;
        v.push_back(c);
        
    
    inorder(root->right);
        
        
    }
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
       return v[k-1]; 
    }
};