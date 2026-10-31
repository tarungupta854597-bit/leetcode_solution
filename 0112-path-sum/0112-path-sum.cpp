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
 void sum(TreeNode* root, int targetSum,int sua,vector<int> &a)
 {
    if(root==NULL)
    {
        return;
    }
     sua+=root->val;  
    if(root->left==NULL && root->right==NULL)
    {
        if(sua==targetSum)
    {
        a.push_back(sua);
        return ;
    }
    }
    sum(root->left,targetSum,sua,a);
    sum(root->right,targetSum,sua,a);


 }
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> a;
        if(root==NULL)
        {
            return false;
        }
         sum(root,targetSum,0,a);
         return !a.empty();
        
        
    }
};