/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
TreeNode* findMin(TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }
        while (root->left != NULL) {
            root = root->left;
        }
        return root;
    }
    class Solution {
    public:
        TreeNode* deleteNode(TreeNode* root, int key) {
            if (root == NULL) {
            return NULL;
            }
            if (key > root->val) {
                root->right = deleteNode(root->right, key);
            } else if (key < root->val) {
                root->left = deleteNode(root->left, key);
            } else {
                if (root->left == NULL) {
                    TreeNode* temp = root->right;
                    delete (root);
                    return temp;
                }
                if (root->right == NULL) {
                    TreeNode* temp = root->left;
                    delete (root);
                    return temp;
                }
                TreeNode* s = findMin(root->right);
                root->val = s->val;
                root->right = deleteNode(root->right, s->val);
               
            }
             return root;

        }
    };