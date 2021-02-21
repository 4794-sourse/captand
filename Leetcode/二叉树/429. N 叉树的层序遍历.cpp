class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> v;
        if (root == NULL) return v;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            int num = q.size();
            vector<int> vue;
            for (int i = 0; i < num; i++) {
                Node *temp = q.front(); q.pop();
                vue.push_back(temp->val);
                for (int j = 0; j < temp->children.size(); j++) {
                    if (temp->children[j]) q.push(temp->children[j]);
                }
            }
            v.push_back(vue);
        }
        return v;
    }
};
