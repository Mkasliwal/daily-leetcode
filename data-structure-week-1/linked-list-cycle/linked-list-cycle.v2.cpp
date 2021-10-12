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
        if(head == NULL) {
            return false;
        }
        
        ListNode* pointer1 = head;
        ListNode* pointer2 = head->next;
        
        while(pointer1 != pointer2) {
            if(pointer2 == NULL || pointer2->next == NULL) {
                return false;
            }
            pointer1 = pointer1->next;
            pointer2 = pointer2->next->next;
        }
        
        return true;
    }
};

