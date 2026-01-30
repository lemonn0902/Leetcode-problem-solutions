// Last updated: 1/30/2026, 6:31:29 PM
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
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head==NULL||head->next==NULL){
15            return NULL;
16        }
17        ListNode* slow=head;
18        ListNode* fast=head->next->next;
19        while(fast && fast->next){
20            slow=slow->next;
21            fast=fast->next->next;
22        }
23        ListNode* toDelete=slow->next;
24        slow->next=slow->next->next;
25        delete toDelete;
26        return head;
27    }
28};