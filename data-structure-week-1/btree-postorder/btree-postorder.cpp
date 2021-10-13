class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        postorder(root, arr);
        return arr;
    }
    private :
    
    void postorder(TreeNode* root,vector<int> &arr)
    {
        if(!root)
            return;
        postorder(root->left,arr);
        postorder(root->right,arr);
        arr.push_back(root->val);
        
    }
};
