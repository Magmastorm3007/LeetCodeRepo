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
public: unordered_map <int,int> m;
    bool findTarget(TreeNode* root, int k) {
     if(root){
        bool l=findTarget(root->left,k);
         if(l)
             return true;
         if(m[k-root->val]>0)
             return true;
         m[root->val]++;
         
         return findTarget(root->right,k);
             
     }
        return false;
    }
};
