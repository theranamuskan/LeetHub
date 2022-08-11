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
    bool solve(TreeNode* root, long long l, long long r){
        if(root==NULL)
        return true;
        long long x=root->val;
        if(x<=l || x>=r)
        return false;
        return solve(root->left, l, x) && solve(root->right, x, r);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root, -1e15, 1e15);
    }
};