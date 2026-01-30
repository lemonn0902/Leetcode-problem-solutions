// Last updated: 1/30/2026, 6:26:08 PM
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
11 class Solution {
12public:
13    
14    ListNode* deleteMiddle(ListNode* head) {
15        if (head == nullptr) return nullptr; // Handle empty list
16        if (head->next == nullptr) { // Handle single node list
17            //delete head;
18            return nullptr;
19        }
20
21        ListNode* slow = head;
22        ListNode* fast = head;
23        ListNode* prev = nullptr;
24
25        // Find the middle node and its previous node
26        while (fast && fast->next) {
27            prev = slow;
28            slow = slow->next;
29            fast = fast->next->next;
30        }
31
32        // Delete the middle node
33        if (prev != nullptr) {
34            prev->next = slow->next; // Skip over the middle node
35            delete slow; 
36        }
37        return head; 
38    }
39};
40