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
void pathsum(TreeNode* root, int &targetSum,int sum,bool &k){
        if(!root)
            return;
        if(sum==targetSum && root->left==NULL && root->right==NULL){
            k=true;
            return;
        }
      if(root->left)
        pathsum(root->left,targetSum,sum+root->left->val,k);
      if(root->right)
        pathsum(root->right,targetSum,sum+root->right->val,k);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){            
            return false;
        }
        bool k=false;
        pathsum(root,targetSum,root->val,k);
        return k;
        
    }
};
