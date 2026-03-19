// Last updated: 3/19/2026, 10:52:33 PM
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
12    void findParent(TreeNode* root,unordered_map<TreeNode*, TreeNode*>& parent){
13        queue<TreeNode*> q;
14        q.push(root);
15        while(!q.empty()){
16            TreeNode* curr= q.front();
17            q.pop();
18            if(curr->left){
19                q.push(curr->left);
20                parent[curr->left]=curr;
21            }
22            if(curr->right){
23                q.push(curr->right);
24                parent[curr->right]=curr;
25            }
26        }
27    }
28    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
29        unordered_map<TreeNode*, TreeNode*> parent;
30        findParent(root, parent);
31        queue<TreeNode*> q;
32        unordered_map<TreeNode*, bool> vis;
33        q.push(target);
34        vis[target]=true;
35        int count=0;
36        while(!q.empty()){
37            int size=q.size();
38            if(count++==k) break;
39            for(int i=0;i<size;i++){
40                TreeNode* curr=q.front();
41                q.pop();
42                if(curr->left&&!vis[curr->left]){
43                    q.push(curr->left);
44                    vis[curr->left]=true;
45                }
46                if(curr->right&&!vis[curr->right]){
47                    q.push(curr->right);
48                    vis[curr->right]=true;
49                }
50                if(parent[curr]&&!vis[parent[curr]]){
51                    q.push(parent[curr]);
52                    vis[parent[curr]]=true;
53                }
54            }
55        }
56        vector<int> ans;
57        while(!q.empty()){
58            TreeNode* node= q.front();
59            q.pop();
60            ans.push_back(node->val);
61        }
62        return ans;
63    }
64};