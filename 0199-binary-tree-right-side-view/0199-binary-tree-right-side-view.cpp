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
    vector<int> rightSideView(TreeNode* root) {
         vector<int> trueresult;
        if(root==NULL)
        {
            return trueresult;
        }
        vector<vector<int>> result;
        queue<TreeNode*> level;
        level.push(root);
        while(!empty(level))
        {
            vector<int> a;
            int si=level.size();
            for(int i=0;i<si;i++)
            {
                TreeNode* temp=level.front();
                level.pop();
                 a.push_back(temp->val);
                if(temp->left!=NULL)
                {
                    level.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    level.push(temp->right);
                }
               
            }
            result.push_back(a);
        }
        for(int i=0;i<result.size();i++)
        {
            trueresult.push_back(result[i][result[i].size()-1]);
        }
        return trueresult;

        
    }
};