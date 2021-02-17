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
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) { 
        vector<int> q1;
        vector<int> q2;
        dfs(root1, q1);
        dfs(root2, q2);
        return q1 == q2;
    }
    void dfs(TreeNode *root, vector<int> &q1) {
        if (root == NULL) return ;
        if (root->left == NULL && root->right == NULL) {
            q1.push_back(root->val);
        }
        dfs(root->left, q1);
        dfs(root->right,q1);
    }
};





