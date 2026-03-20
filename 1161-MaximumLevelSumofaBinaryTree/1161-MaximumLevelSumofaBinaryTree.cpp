// Last updated: 3/20/2026, 12:22:24 PM
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
14    int maxLevelSum(TreeNode* root) {
15        int level=0;
16        int ans=0;
17        queue<TreeNode*> q;
18        int maxi=INT_MIN;
19        q.push(root);
20        while(!q.empty()){
21            int size=q.size();
22            level++;
23            int sum=0; 
24            for(int i=0;i<size;i++){
25                TreeNode* node=q.front();
26                q.pop();
27                if(node->left) q.push(node->left);
28                if(node->right) q.push(node->right);
29                sum+=node->val;
30            }
31            if(sum>maxi){ 
32                maxi=sum;
33                ans=level;
34            }
35        }
36        return ans;
37    }
38};