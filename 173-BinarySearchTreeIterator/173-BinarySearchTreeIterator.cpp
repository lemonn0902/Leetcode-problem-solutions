// Last updated: 3/19/2026, 4:18:44 PM
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
12class BSTIterator {
13    vector<int> in; 
14    int curr;
15public:
16    BSTIterator(TreeNode* root) {
17        curr=0;
18        inorder(root, in);
19    }
20    void inorder(TreeNode* root, vector<int>& in){
21        if(!root) return;
22        inorder(root->left, in);
23        in.push_back(root->val);
24        inorder(root->right, in);
25    }
26    
27    int next() {
28        if(curr<in.size()) return in[curr++];
29        else return -1;
30    }
31    
32    bool hasNext() {
33        return curr<in.size();
34    }
35};
36
37/**
38 * Your BSTIterator object will be instantiated and called as such:
39 * BSTIterator* obj = new BSTIterator(root);
40 * int param_1 = obj->next();
41 * bool param_2 = obj->hasNext();
42 */