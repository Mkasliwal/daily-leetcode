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
    ListNode* reverseList(ListNode* head) {
        ListNode *previousNode, *currentNode, *nextNode;
        previousNode = NULL;
        currentNode = head;
        
        if(head == NULL || currentNode->next == NULL) {
            return head;
        } // edge cases
        
        while(currentNode != NULL) {
            nextNode = currentNode->next; // inorder not to loose the add. of next node
            currentNode->next = previousNode;
            previousNode = currentNode;
            currentNode = nextNode; // usual list traversal
        }
        
        head = previousNode;
        return head;
    }
};

