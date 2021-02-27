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
    TreeNode *pre(TreeNode *root) {
        TreeNode *temp = root->left;
        while (temp->right) {
            temp = temp->right;
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) return NULL;
        if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else if (root->val < key) {
            root->right = deleteNode(root->right, key);
        } else {
            if (root->left == NULL || root->right == NULL) {
                TreeNode *temp = root->left != NULL ? root->left : root->right;
                //free(root);
                return temp;
            } else {
                TreeNode *temp = pre(root);
                root->val = temp->val;
                root->left = deleteNode(root->left, root->val);
            }       
        }
        return root; 
    }
};
