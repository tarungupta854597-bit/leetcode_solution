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
 bool hi(TreeNode* root,TreeNode* root1)
 {
    if(root==NULL && root1==NULL)
    {
        return true;
    }
    else if(root==NULL || root1==NULL)
    {
        return false;
    }
    if(root->val!=root1->val)
    {
        return false;
    }
    return hi(root->left,root1->right)&& hi(root->right,root1->left);
 }
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;

      return hi(root->left ,root->right);

    }
};