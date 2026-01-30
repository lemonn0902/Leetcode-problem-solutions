// Last updated: 1/30/2026, 12:10:36 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* slow=head;
13        ListNode* fast=head;
14        while(fast && fast->next!=NULL){
15            slow=slow->next;
16            fast=fast->next->next;
17            if(slow==fast){
18                fast=head;
19                while(slow!=fast){
20                    fast=fast->next;
21                    slow=slow->next;
22                
23                }
24                return slow;
25            }
26        }
27        return nullptr;
28    }
29};