// Last updated: 7/27/2025, 1:21:36 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) {
                fast=head;
                while(slow!=fast){
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        
        return NULL;
    }
};