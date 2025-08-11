// Last updated: 8/11/2025, 10:50:08 PM
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
    void traverse(TreeNode* node, vector<int>& ans){
        if(!node) return;
        traverse(node->left, ans);
        ans.push_back(node->val);
        traverse(node->right, ans);

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        if(root==NULL) return false;
        traverse(root, ans);
        //sort(ans.begin(), ans.end());
        int n=ans.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int sum= ans[l]+ans[r];
            if(sum==k) return true;
            else if(sum<k) l++;
            else r--;
        }
        return false;
    }
};