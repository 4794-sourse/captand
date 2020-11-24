//����һ�� 
int countNodes(struct TreeNode* root){
    if (root == NULL) return 0;
    return countNodes(root->left) + countNodes(root->right) + 1;
}
//�������� 
class Solution {
public:
    // ͳ���������
    int countLevels(TreeNode* root) {
        int levels = 0;
        while (root) {
            root = root->left; levels += 1;
        }
        return levels;
    }
    int countNodes(TreeNode* root){
        // 2. ������ȫ���������ʼ򻯱�������
        if(root == nullptr) return 0;
        int left_levels = countLevels(root->left);
        int right_levels = countLevels(root->right);
        // ��������ȵ������������, ������������������
        if(left_levels == right_levels){
            return countNodes(root->right) + (1<<left_levels);
        }else{
            return countNodes(root->left) + (1<<right_levels);
        }
    }
};
