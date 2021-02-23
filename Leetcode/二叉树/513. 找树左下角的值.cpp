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
    int findBottomLeftValue(TreeNode* root) {
        int ret = 0;
        if (root == NULL) return ret;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            int num = q.size();
            for (int i = 0; i < num; i++) {
                TreeNode *temp = q.front(); q.pop();
                if (i == 0) ret = temp->val;
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
        }
        return ret;
    }
};
