class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return cmp(root, root);
    }
    bool cmp(TreeNode *p, TreeNode *q) {
        if (p == NULL && q == NULL) return true;
        if (p == NULL || q == NULL) return false;
        if (p->val != q->val) return false;
        return cmp(p->left, q->right) && cmp(p->right, q->left);
    }
};
