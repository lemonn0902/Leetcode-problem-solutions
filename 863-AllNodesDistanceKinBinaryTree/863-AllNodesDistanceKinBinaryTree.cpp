// Last updated: 3/19/2026, 8:38:00 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    void findParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parents){
13        queue<TreeNode*> q;
14        q.push(root);
15        while(!q.empty()){
16            TreeNode* curr=q.front();
17            q.pop();
18            if(curr->left!=NULL){
19                q.push(curr->left);
20                parents[curr->left]=curr;
21            }
22            if(curr->right!=NULL){
23                q.push(curr->right);
24                parents[curr->right]=curr;
25            }
26        }
27    }
28    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
29        unordered_map<TreeNode*, TreeNode*> parents; //node->parent
30        findParents(root, parents);
31        unordered_map<TreeNode*, bool> vis;
32        queue<TreeNode*> q;
33        q.push(target);
34        vis[target]=true;
35        int curr_level=0;
36        while(!q.empty()){
37            int size=q.size();
38            if(curr_level++==k) break;
39            for(int i=0;i<size;i++){
40                TreeNode* node= q.front();
41                q.pop();
42                if(node->left&&!vis[node->left]){
43                    q.push(node->left);
44                    vis[node->left]=true;
45                }
46                if(node->right&&!vis[node->right]){
47                    q.push(node->right);
48                    vis[node->right]=true;
49                }
50                if(parents[node]&&!vis[parents[node]]){
51                    q.push(parents[node]);
52                    vis[parents[node]]=true;
53                }
54            }
55        }
56        vector<int> ans;
57        while(!q.empty()){
58            TreeNode* curr=q.front();
59            q.pop();
60            ans.push_back(curr->val);
61        }
62        return ans;
63    }
64};