//11ms (can follow other approach)
class Solution {
public:
    void help(TreeNode* root,vector<int>&arr){
        if(!root){arr.push_back('NULL');return;}
         arr.push_back(root->val);
        help(root->left,arr);
        help(root->right,arr);
    }
    void help1(TreeNode* root,vector<int>&arr){
        if(!root){arr.push_back('NULL');return;}
         arr.push_back(root->val);
        help1(root->right,arr);
        help1(root->left,arr);
    }
    
    bool isSymmetric(TreeNode* root) {
        vector<int>lefti,righti;
        help(root->left,lefti);
        help1(root->right,righti);
        if(lefti==righti)
            return true;
        return false;
    }
};
