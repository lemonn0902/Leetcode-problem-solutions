// Last updated: 7/14/2025, 4:20:42 PM
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
    int getDecimalValue(ListNode* head) {
        if(head->next==nullptr){
            return head->val;
        }
        int len=0; int no=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        
        ListNode* temp2=head;
        while(temp2!=NULL){
            no += (temp2->val * pow(2, len - 1));
            len--;
            temp2=temp2->next;
        }
        return no;
    }
};