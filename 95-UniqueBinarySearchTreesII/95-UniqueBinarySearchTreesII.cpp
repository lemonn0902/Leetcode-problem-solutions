// Last updated: 6/26/2025, 1:28:26 AM
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
    TreeNode* clone(TreeNode* root, int offset){
        if (!root) return nullptr;
        TreeNode* newRoot = new TreeNode(root->val + offset);
        newRoot->left = clone(root->left, offset);
        newRoot->right = clone(root->right, offset);
        return newRoot;
    }

    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        vector<vector<TreeNode*>> dp(n + 1);
        dp[0].push_back(nullptr);
        for(int nodes=1;nodes<=n;nodes++){
            for(int root=1;root<=nodes;root++){
                int leftCount= root-1;
                int rightCount= nodes-root;
                for( TreeNode* l: dp[leftCount]){
                    for(TreeNode* r: dp[rightCount]){
                        TreeNode* rootNode = new TreeNode(root);
                        rootNode->left = l;
                        rootNode->right = clone(r, root);
                        dp[nodes].push_back(rootNode);
                    }

                }
            }
        }
        return dp[n];
    }
};