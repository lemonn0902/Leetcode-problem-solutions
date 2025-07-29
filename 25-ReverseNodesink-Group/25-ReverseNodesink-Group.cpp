// Last updated: 7/29/2025, 4:13:00 PM
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
        ListNode* dummy= new ListNode(0);
        dummy->next= head;
        ListNode* beforeLeft=dummy;
        for(int i=1;i<left;i++){
            beforeLeft=beforeLeft->next;
        }
        ListNode* curr=beforeLeft->next;
        ListNode* prev= nullptr;
        ListNode* next= nullptr;
        ListNode* tail=curr;
        for(int i=0;i<=right-left;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        beforeLeft->next=prev;
        tail->next=curr;
        return dummy->next;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=0;
        ListNode* temp= head;
        while(temp){
            n++;
            temp=temp->next;
        }
        int l=1;
        int r=k;
        while(r<=n){
            head=reverse(head,l,r);
            l=r+1;
            r=l+k-1;
            

        }
        return head;
    }
};