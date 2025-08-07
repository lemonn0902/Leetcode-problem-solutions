// Last updated: 8/7/2025, 8:41:21 PM
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
    void solve(TreeNode* root, int target, vector<vector<int>>& res, vector<int> curr, int sum){
        if(root==NULL) return;
        sum=sum+root->val;
        curr.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            if(sum==target){
                res.push_back(curr);
                
            }
            return;
        }
        
        solve(root->left, target,res,curr, sum);
        solve(root->right, target, res, curr, sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> curr;
        
        solve(root, targetSum, res, curr, 0 );
        return res;
    }
};