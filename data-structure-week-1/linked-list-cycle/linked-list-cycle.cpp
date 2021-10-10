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
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        if(!temp)return false;
        while(temp->next!=NULL){
            if(temp->val==INT_MAX)
                return true;
            temp->val=INT_MAX;
            temp=temp->next;
        }
        return false;
    }
};
