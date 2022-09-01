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
  //  int maxi=INT_MIN;
    
    int goodNodes(TreeNode* root,int maxi=INT_MIN) {
        if(!root)
            return 0;
        int ans=0;
        if(root->val>=maxi){
            ans++;
            maxi=root->val;
        }
        int lft=goodNodes(root->left, maxi);
        int rght=goodNodes(root->right, maxi);
        return ans+lft+rght;
    }
};