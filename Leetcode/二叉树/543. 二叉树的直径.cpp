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
    int ans = 0;
    int height(TreeNode *root) {
        if (root == NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        ans = max(ans, l + r + 1);
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        height(root);
        return ans - 1;
    }
};
