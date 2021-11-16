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

/**
* Runtime: 28 ms, faster than 41.98% of C++ online submissions for Subtree of Another Tree.
* Memory Usage: 29 MB, less than 22.10% of C++ online submissions for Subtree of Another Tree.
*/
class Solution {
private:
    bool isSameTree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) {
            return true;
        }
        
        if(root != NULL && subRoot != NULL && root->val == subRoot->val) {
            return isSameTree(root->left,subRoot->left) && isSameTree(root->right,subRoot->right);
        }
        return false;
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) {
            return false;
        }
        
        if(subRoot == NULL) {
            return true;
        }
        
        if(isSameTree(root,subRoot)) {
            return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};

