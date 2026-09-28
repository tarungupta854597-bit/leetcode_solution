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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=new TreeNode(val);
        TreeNode* a=root;
        if (root==NULL)
        {
           return temp;
        }
        if(a->val>val)
        {
            root->left= insertIntoBST(a->left,val);
        }
        else if(a->val<val)
        {
            root->right= insertIntoBST(a->right,val);
        }
        return root;
        
    }
};