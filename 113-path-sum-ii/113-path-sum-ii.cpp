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
    vector<vector<int>> ans;
    
    void solve(TreeNode* root, int t, int sum, vector<int> &v){
        if(root==NULL)
            return;
        sum+=root->val;
        v.push_back(root->val);
        if(sum==t && root->left==NULL && root->right==NULL){
            ans.push_back(v);
        }
            
        solve(root->left, t, sum, v);
        solve(root->right, t, sum, v);
        v.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int t) {
        vector<int> v;
        solve(root, t, 0, v);
        return ans;
    }
};