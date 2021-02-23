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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v;
        if (root == NULL) return v;
        vector<int> temp;
        temp.push_back(root->val);
        dfs(root, targetSum - root->val, v, temp);
        return v;
    }
    void dfs(TreeNode *root, int targetSum, vector<vector<int>> &v, vector<int> &temp) {
        if (root == NULL) return ;
        if (root->left == NULL && root->right == NULL && targetSum == 0) {
            v.push_back(temp);
            return ;
        }
        if (root->left) {
            temp.push_back(root->left->val);
            dfs(root->left, targetSum - root->left->val, v, temp);
            temp.pop_back();
        }
        if (root->right) {
            temp.push_back(root->right->val);
            dfs(root->right, targetSum - root->right->val, v, temp);
            temp.pop_back();
        }
        
    }
};
