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


static int speedUp=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:
    
    
    
    TreeNode* Preorder(TreeNode *root, int data ){
        
        if(root== NULL){
            root= new TreeNode( data);
            return root;}
        
        else if(data<= root->val){
            
            root->left= Preorder(root->left,data);
        }
        
        else {
            
            root->right= Preorder(root->right,data);
        }
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& p) {
        if(p.size()<1)
            
            return NULL;
     TreeNode* root= new TreeNode(p[0]);
    for(int i=1;i<p.size();i++)
       
         root = Preorder(root,p[i]);
        
        return root;
    
    }
};