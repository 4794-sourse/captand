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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isname(root->left, root->right);
    }
    bool isname(TreeNode *p, TreeNode *q) {
        if (!p && !q) return true;
        if (p && !q || !p && q) return false;
        if (p->val == q->val) {
            return isname(p->left, q->right) && isname(p->right, q->left);
        }
        return false;
    }
};
