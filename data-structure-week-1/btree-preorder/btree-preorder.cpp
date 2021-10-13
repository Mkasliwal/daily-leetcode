class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        preorder(root, arr);
        return arr;
    }
    private :
    
    void preorder(TreeNode* root,vector<int> &arr)
    {
        if(!root)
            return;
        arr.push_back(root->val);
        preorder(root->left,arr);
        preorder(root->right,arr);
        
    }
};
