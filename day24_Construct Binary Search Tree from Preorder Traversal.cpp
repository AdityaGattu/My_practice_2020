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
    TreeNode* bst(TreeNode* root,int data){
        if(root==NULL){
            root=new TreeNode(data);
            return root;
        }
        if(root->val>data)
            root->left=bst(root->left,data);
        if(root->val<data)
            root->right=bst(root->right,data);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        if(preorder.size()<1)
              return NULL;
        TreeNode* root= new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++)
            root=bst(root,preorder[i]);
        return root;
    }
};
