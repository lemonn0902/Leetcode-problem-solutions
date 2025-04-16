// Last updated: 4/16/2025, 1:23:40 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* tail=&dummy;
        while(l1 && l2){
            if(l1->val<l2->val){
                tail->next=l1;
                l1=l1->next; //increment LL with smaller current value
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(l1)
        tail->next=l1; //since l1 is already sorted, just add the entire LL
        else
        tail->next=l2; //same goes for l2
        return dummy.next;
    }
};