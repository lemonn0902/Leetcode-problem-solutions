// Last updated: 3/24/2026, 11:00:54 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) {
22        if(!root) return NULL;
23        if(root->right&&root->left){
24            root->left->next=root->right;
25            if(root->next){
26                root->right->next=root->next->left;
27            }
28        }
29        connect(root->left);
30        connect(root->right);
31        return root;
32    }
33};