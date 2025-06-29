// Last updated: 6/30/2025, 1:16:37 AM
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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> avg;
        if(!root) return avg;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelSize= q.size();
            double sum=0;
            for(int i=0;i<levelSize;i++){
                TreeNode* curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            double a= sum/levelSize;
            avg.push_back(a);
        }
        return avg;
    }
};