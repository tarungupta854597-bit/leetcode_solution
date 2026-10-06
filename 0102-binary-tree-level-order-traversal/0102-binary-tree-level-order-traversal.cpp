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
// i have used the basic algo for the level order traversal which use a queue which store the node of each level and an 2D vector which store the element at each level 
// the first while loop check that if the queue if empty or not and the loop keep on runing until it is empty   then we run a for loop which run for the number of element in a level and we keep on storing the val of the the node we encounter and keep on pushing the node to the queue finaly when we visited all the node and store the value of a single level in a vector we push it into the main 2D vector hence we have the algo of tree level order traversal;
// time complexity:O(n)
// space comlexity:O(n)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)
        {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root); 
        while(!q.empty())
        {
            vector<int> visit;
            int level = q.size();
            for(int i=0;i<level;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                visit.push_back(curr->val);
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
            }
            result.push_back(visit);
        }
        return result;
    }
};