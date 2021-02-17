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
    vector<string> q;
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        dfs(root, s);
        return q;
    }
    void dfs(TreeNode *root, string s) {
        if (root == NULL) return ;
        s += to_string(root->val);
        if (root->left == NULL && root->right == NULL) {
            q.push_back(s);
        } else {
            s += "->";
            dfs(root->left, s);
            dfs(root->right, s);
        }
    }
};
