/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include <cmath>
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) >= 0;
    }
    int height(TreeNode *root) {
        if (root == NULL) return 0;
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        if (leftheight == -1 || rightheight == -1 || abs(leftheight - rightheight) > 1) {
            return -1;
        }
        else return max(leftheight, rightheight) + 1;
    }
};
