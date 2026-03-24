// Last updated: 3/24/2026, 10:48:47 PM
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
22        if(!root) return root;
23        queue<Node*> q;
24        q.push(root);
25        while(!q.empty()){
26            int size=q.size();
27            for(int i=0;i<size;i++){
28                Node* curr=q.front();
29                q.pop();
30                if(i==size-1) curr->next=NULL;
31                else curr->next=q.front();
32                if(curr->left) q.push(curr->left);
33                if(curr->right) q.push(curr->right);
34            }
35        }
36        return root;
37    }
38};