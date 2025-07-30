// Last updated: 7/30/2025, 1:10:51 PM
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
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        vector<int> arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n= arr.size();
        vector<int> nge;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&& st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                nge.push_back(0);
            }
            else{
                nge.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(nge.begin(), nge.end());
        ListNode* dummy=new ListNode(0);
        ListNode* curr = dummy;
        for(int i=0;i<n;i++){
            if(nge[i]!=0) continue;
            else
            {
                curr->next=new ListNode(arr[i]);
                curr = curr->next;
            }
            
        }
        return dummy->next;
    }
};