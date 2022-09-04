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
public:   bool isValidBST(TreeNode* root) {
   
        if(root == NULL) return true;
        return check(root, LONG_MIN, LONG_MAX);
    }
    bool check(TreeNode* root, long minimum, long maximum){
        // If root is NULl...
        if(root == NULL) return true;
       
        if(root->val <= minimum || root->val >= maximum) return false;
   
        return check(root->left, minimum, root->val) && check(root->right, root->val, maximum);
    }
};
