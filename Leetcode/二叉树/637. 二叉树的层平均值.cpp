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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            int ans = q.size();
            double num = 0.0;
            for (int i = 0; i < ans; i++) {
                TreeNode *temp = q.front(); q.pop();
                num += temp->val;
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            v.push_back(num / (double)ans);
        }
        return v;
    }
};
