// Last updated: 9/4/2025, 4:24:04 PM
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
    unordered_map<string, int> mpp;
    string dfs(TreeNode* root, vector<TreeNode*>& res){
        if(!root) return " ";
        string curr=to_string(root->val);
        string left=dfs(root->left, res);
        string right=dfs(root->right,res);
        string final=curr+","+left+","+right;
        if(mpp.find(final)!=mpp.end()){
            if(mpp[final]==1)
            res.push_back(root);
        }
        mpp[final]++;
        return final;


    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        if(!root) return {};
        vector<TreeNode*> res;
        string a=dfs(root, res);
        return res;
    }
};