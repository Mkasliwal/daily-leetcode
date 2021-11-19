/**
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum Root to Leaf Numbers.
Memory Usage: 9.2 MB, less than 37.08% of C++ online submissions for Sum Root to Leaf Numbers.
*/


class Solution {
public:
    
    void check(TreeNode* root,int temp,int &ans){
        if(root->left)
            check(root->left,temp*10+root->left->val,ans);
        else{
          if(root->right);
          else{
            ans+=temp;
            return;
          }  
        }
        if(root->right)
            check(root->right,temp*10+root->right->val,ans);
          else{
          if(root->left);
          else{
            ans+=temp;
            return;
          }  
        }
        
    }
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        int k=-1;
        TreeNode* temp;
        if(!root->left && !root->right)return root->val;
        else if(!root->left){
            temp=root->right;
            k=temp->val;
        }            
        else if(!root->right){
            temp=root->left;
            k=temp->val;
        }
        
        if(k>=0)
        check(temp,root->val*10+k,ans);
        else
        check(root,root->val,ans);
        
        return ans;
    }
};
