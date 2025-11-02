// Last updated: 11/2/2025, 11:43:39 AM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* curr=dummy;
        unordered_set<int> st(nums.begin(), nums.end());
        while(curr->next){
            int val=curr->next->val;
            if(st.find(val)!=st.end()){
                curr->next=curr->next->next;
            }
            else curr=curr->next;
        }
        return dummy->next;
    }
};