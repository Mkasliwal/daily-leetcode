
//could have improved by not taking variable "k"

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
        ListNode* temp=head;
        if(!head)return NULL;
        int k=temp->val;
        while(temp && temp->next){
            if(temp->next->val==k){
                temp->next=temp->next->next;
            }else{
            k=temp->next->val;
                
            temp=temp->next;
            }
        }
        return head;
    }
};
