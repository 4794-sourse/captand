/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> p;
        if (root == NULL) return p;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            int num = q.size();
            vector<int> ans;
            for (int i = 0; i < num; i++) {
                TreeNode *temp = q.front();
                q.pop();
                ans.push_back(temp->val);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            p.push_back(ans);
        }
        reverse(p.begin(), p.end());
        return p;
    }
};
