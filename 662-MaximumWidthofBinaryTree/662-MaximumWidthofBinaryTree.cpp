// Last updated: 3/21/2026, 12:26:57 PM
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
14    int widthOfBinaryTree(TreeNode* root) {
15        long long maxi=0;
16        if(!root) return maxi;
17        queue<pair<TreeNode*,long long>> q; //node, index
18        q.push({root,0});
19        while(!q.empty()){
20            int size=q.size();
21            long long start_index=0, last_index=0;
22            long long minIndex = q.front().second;
23            for(int i=0;i<size;i++){
24                auto [node,idx]=q.front();
25                q.pop();
26                idx -= minIndex;
27                if(i==size-1) last_index=idx;
28                if(i==0) start_index=idx;
29                if(node->left) q.push({node->left,2*idx+1});
30                if(node->right) q.push({node->right,2*idx+2});
31            }
32            long long width=1+(last_index-start_index);
33            maxi=max(maxi, width);
34        }
35        return maxi;
36    }
37};