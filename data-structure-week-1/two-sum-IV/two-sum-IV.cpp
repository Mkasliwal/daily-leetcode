//TIME-90MS 
//not so improvised solution
class Solution {
public:
    
    void arr(TreeNode *p,vector<int> &a){
        if(p){
            arr(p->left,a);
            a.push_back(p->val);
            arr(p->right,a);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
     
        vector<int> a;
        arr(root,a);
        int i=0;
        int j = a.size()-1;
        while(i<j){
            if(a[i]+a[j] == k)
                return true;
            if(a[i]+a[j] > k)
                j--;
            else
                i++;   
        }
      return false;
    }
};
