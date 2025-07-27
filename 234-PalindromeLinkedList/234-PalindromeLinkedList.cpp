// Last updated: 7/27/2025, 4:14:24 PM
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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!st.empty()){
            if(st.top()!=temp->val){
                return false;
                break;
            }
            st.pop();
            temp=temp->next;
        }
        return true;
    }
};