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
 void arr(TreeNode* root, vector<long long>  &result)
 {
    if(root==NULL)
    {
        return;
    }
    arr(root->left,result);
    result.push_back(root->val);
    arr(root->right,result);

 }
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<long long>  result;
        arr(root,result);
         for(int i=0;i+1<result.size();i++)
         {
            if(result[i]>=result[i+1])
            {
                return false;
            }
         }
         return true;

        
    }
};