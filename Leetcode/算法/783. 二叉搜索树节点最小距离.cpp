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
    int mix = 100000, pre;
    int minDiffInBST(TreeNode* root) { 
       dfs(root);
       return mix;
    }
    void dfs(TreeNode *root) {
        if (root == NULL) return ;
        dfs(root->left);
        if (pre != NULL) {
            mix = min(mix, root->val - pre);
        }
        pre = root->val;
        dfs(root->right);
    }
};
