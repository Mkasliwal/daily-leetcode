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
private:
    vector<vector<int>> arr;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) {
            return arr;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            vector<int> elements;
            int n = q.size();
            while(n--) {
                TreeNode* current = q.front();
                elements.push_back(current->val);
                q.pop();
                
                if(current->left != NULL) {
                    q.push(current->left);
                }
                if(current->right != NULL) {
                    q.push(current->right);
                }
            }
            arr.push_back(elements);
        }
        return arr;
    }
};

