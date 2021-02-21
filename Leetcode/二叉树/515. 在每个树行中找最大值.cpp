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
    vector<int> largestValues(TreeNode* root) {
        vector<int> v;
        if (root == NULL) return v;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            int num = q.size();
            int Max = INT_MIN;
            for(int i = 0; i < num; i++) {
                TreeNode *temp = q.front(); q.pop();
                Max = max(Max, temp->val);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            v.push_back(Max);
        }
        return v;
    }
};
