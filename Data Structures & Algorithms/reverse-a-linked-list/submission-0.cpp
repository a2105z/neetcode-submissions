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

 // 1 -> 2 -> 3 -> 4

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head; 
        ListNode* previous = nullptr; 
        ListNode* nextTemp = nullptr; 

        while (current != nullptr) {
            nextTemp = current->next; 
            current->next = previous;
            previous = current; 
            current = nextTemp; 
        }

        return previous; 
    }
};
