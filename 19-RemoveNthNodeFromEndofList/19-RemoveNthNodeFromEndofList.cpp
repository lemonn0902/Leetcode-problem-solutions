// Last updated: 1/30/2026, 6:19:54 PM
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        int length=0;
15        ListNode* temp=head;
16        while(temp){
17            length++;
18            temp=temp->next;
19        }
20        if(n==length){
21            return head->next;
22        }
23        int fromStart= length-n-1;
24        ListNode* temp2=head;
25        for(int i=0;i<fromStart;i++){
26            temp2=temp2->next;
27        }
28        temp2->next=temp2->next->next;
29        return head;
30    }
31};