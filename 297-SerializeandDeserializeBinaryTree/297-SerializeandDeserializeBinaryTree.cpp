// Last updated: 3/24/2026, 8:36:46 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Codec {
11public:
12    // Encodes a tree to a single string.
13    string serialize(TreeNode* root) {
14        if (!root)
15            return "null";
16        string l = serialize(root->left);
17        string r = serialize(root->right);
18        string curr = to_string(root->val) + "," + l + "," + r;
19        return curr;
20    }
21    TreeNode* builder(stringstream& ss){
22        string token;
23        getline(ss, token , ',');
24        if(token=="null") return nullptr;
25        TreeNode* node = new TreeNode(stoi(token));
26
27        node->left = builder(ss);
28        node->right = builder(ss);
29
30        return node;
31    }
32    // Decodes your encoded data to tree.
33    TreeNode* deserialize(string data) {
34        stringstream ss(data);
35        return builder(ss);
36    }
37};
38
39// Your Codec object will be instantiated and called as such:
40// Codec ser, deser;
41// TreeNode* ans = deser.deserialize(ser.serialize(root));