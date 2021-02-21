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
    void bfs(TreeNode *root, vector<vector<int>> &q) {
        if (root == NULL) return ;
        queue<TreeNode *> v;
        v.push(root);
        while (!v.empty()) {
            int ans = v.size();
            vector<int> cnt;
            for (int i = 0; i < ans; i++) {
                TreeNode *temp = v.front();
                if (temp->left) v.push(temp->left);
                if (temp->right) v.push(temp->right);
                cnt.push_back(temp->val);
                v.pop();
            }
            q.push_back(cnt);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> q;
        bfs(root, q);
        return q;
    }
};
