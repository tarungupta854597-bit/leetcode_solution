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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)
        {
            return result;
        }
        queue<TreeNode*> a;
        a.push(root);
        while(!a.empty())
        {
            vector<int>  h;
            int s=a.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* temp=a.front();
                h.push_back(temp->val);
                if(temp->left!=NULL)
                {
                    a.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    a.push(temp->right);
                }
                a.pop();
            }
            result.push_back(h);
        }
        for(int i=0;i<result.size()/2;i++)
        {
            swap(result[i],result[result.size()-1-i]);
        }
        return result;
    }
};