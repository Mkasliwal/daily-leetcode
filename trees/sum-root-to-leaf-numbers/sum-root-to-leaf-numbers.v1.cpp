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

/* Runtime Complexity
 *
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum Root to Leaf Numbers.
 * Memory Usage: 9.2 MB, less than 37.12% of C++ online submissions for Sum Root to Leaf Numbers.
*/
class Solution {
private:
    int sumNums(TreeNode* root, int sumSoFar, int sumTotal) {
        if(root == NULL) {
            return 0;
        }
        if(root->left == NULL && root->right == NULL) {
            sumTotal = sumSoFar*10+root->val;
            return sumTotal;
        }
        
        sumSoFar = sumSoFar*10 + root->val;
        return sumNums(root->left,sumSoFar,sumTotal) + sumNums(root->right,sumSoFar,sumTotal);
        
    }
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        return sumNums(root,0,0);
        
    }
};

