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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mini = INT_MAX;
        int first = -1;
        int last = -1;
        int idx = 1;
        ListNode* curr = head->next;
        ListNode* prev = head;

        while(curr->next != NULL){
            if ((curr->val > prev->val && curr->val > curr->next->val)
            || (curr->val < prev->val && curr->val < curr->next->val)) {
                
            // first critical point
                if (first == -1) first = idx;
            // if not first c.p 
                if (last != -1){
                    mini = min(mini, idx-last);
                } 
                last = idx;
            }
            prev = curr;
            curr = curr->next;
            idx++;
        }

        if (first == last) return {-1,-1};
        int maxi = last - first;
        return {mini, maxi};
    }
};