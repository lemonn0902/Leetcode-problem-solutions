// Last updated: 3/24/2026, 10:34:56 PM
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
14unordered_map<int,int> mpp; //sum, freq
15    int dfs(TreeNode* root){
16        if(!root) return 0;
17        int leftSum=dfs(root->left);
18        int rightSum=dfs(root->right);
19        int curr=root->val+leftSum+rightSum;
20        mpp[curr]++;
21        return curr;
22    }
23    vector<int> findFrequentTreeSum(TreeNode* root) {
24        vector<int> ans;
25        dfs(root);
26        int maxi=0;
27        for(auto it: mpp){
28            if(it.second>maxi) maxi=it.second;
29        }
30        for(auto it:mpp){
31            if(it.second==maxi) ans.push_back(it.first);
32        }
33        return ans;
34    }
35};