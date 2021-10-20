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
    void check(TreeNode*root,bool &k,long long int min,long long int max){
        if(!root || k==false)return;
        if(root->val<=min || root->val>=max){
            k=false;
            return;
        }
        if(root->left)
        check(root->left,k,min,root->val);
        if(root->right)
        check(root->right,k,root->val,max);
            
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root)return false;
        int val=root->val;
        bool k =true;
        check(root,k,LLONG_MIN,LLONG_MAX);
        return k;
    }
};
