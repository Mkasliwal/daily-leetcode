/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

/**
*Runtime: 12 ms, faster than 100.00% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
*Memory Usage: 23.4 MB, less than 11.09% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
*/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) {
            return root;
        }
        
        if(root->val > p->val && root->val > q->val) {
            return lowestCommonAncestor(root->left,p,q);
        } else if(root->val < p->val && root->val < q->val) {
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
};

