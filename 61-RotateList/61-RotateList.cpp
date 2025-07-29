// Last updated: 7/29/2025, 4:32:29 PM
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
    ListNode* reverse(ListNode* head, int left, int right){
        if(!head || left == right ) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next= head;
        ListNode* beforeLeft = dummy;
        for(int i=1;i<left;i++){
            beforeLeft=beforeLeft->next;
        }
        ListNode* curr= beforeLeft->next;
        ListNode* tail= curr;
        ListNode* prev= nullptr;
        ListNode* next= nullptr;
        for(int i=0;i<=right-left;i++){
            next= curr->next;
            curr->next= prev;
            prev=curr;
            curr=next;
        }
        beforeLeft->next= prev;
        tail->next= curr;
        return dummy->next;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || head->next==NULL) return head;
        int n=0;
        ListNode* temp = head;
        while(temp){
            n++;
            temp=temp->next;
        }
        k = k % n;
        if(k == 0) return head;
        head= reverse(head, 1, n);
        head= reverse(head, 1, k);
        head= reverse(head, k+1, n);
        return head;
    }
};