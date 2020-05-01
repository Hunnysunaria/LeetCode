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
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        if(root== NULL) 
            return arr.size()== 0;
        return isvalid(root,arr,0);
    }
    
    bool isvalid(TreeNode* root, vector<int>& arr, int i){
        
        if(root->val!= arr[i])
            return false;
        
        if(i== arr.size()-1)
            return root->left == NULL && root->right == NULL;
        
        if(root->left != NULL && isvalid(root->left,arr, i+1))
        {  return true;}
        
        if(root->right != NULL && isvalid(root->right,arr, i+1))
        {return true;}
        
        return false;
    }
};