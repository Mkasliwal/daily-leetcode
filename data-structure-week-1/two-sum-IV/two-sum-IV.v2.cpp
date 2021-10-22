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
private:
    vector<int> arr;
    
    void createArr(TreeNode* root) {
        if(root != NULL) {
            createArr(root->left);
            arr.push_back(root->val);
            createArr(root->right);
        }
    }
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) {
            return false;
        }
        
        createArr(root);
        
        unordered_map <int,int> map;
        for(int i=0; i<arr.size(); i++) {
            map[arr[i]] = i;
        }

        for(int i=0; i<arr.size(); i++) {
            int key = k - arr[i]; // 7 -> 6 -> 5 -> 4 -> 3 -> 2
            if(map.count(key) > 0 && map[key] != i) {
                return true;
            }
        }
        return false;
    }
};

