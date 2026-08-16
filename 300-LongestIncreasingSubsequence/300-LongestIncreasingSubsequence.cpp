// Last updated: 8/16/2026, 4:24:51 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* mergeKLists(vector<ListNode*>& lists) {
14        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>,
15                       greater<>>
16            pq;
17        for (auto it : lists) {
18            if (it)
19                pq.push({it->val, it});
20        }
21        ListNode* dummy = new ListNode(0);
22        ListNode* temp = dummy;
23        while (!pq.empty()) {
24            auto [val, node] = pq.top();
25            pq.pop();
26            temp->next = node;
27            temp = temp->next;
28            if (node->next) {
29                pq.push({node->next->val, node->next});
30            }
31        }
32        return dummy->next;
33    }
34};