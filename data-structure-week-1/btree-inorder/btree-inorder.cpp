class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);
        return arr;
    }
    private :
    
    void inorder(TreeNode* root,vector<int> &arr)
    {
        if(!root)
            return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
        
    }
};
