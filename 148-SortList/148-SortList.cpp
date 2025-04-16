// Last updated: 4/16/2025, 1:17:26 PM
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
    ListNode* getMid(ListNode* head){
        ListNode* slow= head;
        ListNode* fast= head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode dummy;
        ListNode* tail=&dummy;
        while(l1 && l2){
            if(l1->val<l2->val){
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(l1)
        tail->next=l1;
        else
        tail->next=l2;
        return dummy.next;

    }
    ListNode* sortList(ListNode* head) {
        //base case:
        if(!head || !head->next)
        return head;
        //divide into 2 halves:
        ListNode* mid= getMid(head);
        ListNode* right=mid->next;
        mid->next = nullptr;
        //recurrsively sort both halves:
        ListNode* leftSorted= sortList(head);
        ListNode* rightSorted= sortList(right);
        //return merged array:
        return merge(leftSorted, rightSorted);
         
    }
};