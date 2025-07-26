// Last updated: 7/26/2025, 5:16:26 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev=dummy;
        prev->next=head;
        ListNode* temp=head;
        
        while(temp&&temp->next){
            if(temp->val!=temp->next->val) {
                temp=temp->next;
                prev=prev->next;
            }
            else{
                int dupVal= temp->val;
                while(temp && temp->val==dupVal){
                    temp=temp->next;
                }
                prev->next=temp;
            }
        }
        return dummy->next;
    }
};