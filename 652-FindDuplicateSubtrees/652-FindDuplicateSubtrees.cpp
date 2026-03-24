// Last updated: 3/24/2026, 8:04:33 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14string str="";
15unordered_map<string,int> mpp;
16    string dfs(TreeNode* root, vector<TreeNode*>& res){
17        if(!root) return "#";
18        string l=dfs(root->left, res);
19        string r=dfs(root->right,res);
20        string curr=to_string(root->val)+","+l+","+r;
21        if(mpp[curr]==1){
22            res.push_back(root);
23
24        }
25        mpp[curr]++;
26        return  curr;
27    }
28    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
29        vector<TreeNode*> res;
30        dfs(root, res);
31        return res;
32    }
33};