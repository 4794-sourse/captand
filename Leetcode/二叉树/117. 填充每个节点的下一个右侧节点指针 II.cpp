/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) return NULL;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()) {
            int num = q.size();
            Node *pre = NULL;
            for (int i = 0; i < num; i++) {
                Node *node = q.front(); q.pop();
                if (pre) node->next = pre;
                else node->next = NULL;
                pre = node;
                if (node->right) q.push(node->right);
                if (node->left) q.push(node->left);
            }
        }
        return root;
    }
};
