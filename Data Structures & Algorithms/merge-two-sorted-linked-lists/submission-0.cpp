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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* ourCurrent = &dummy; 

        ListNode* current1 = list1; 
        ListNode* current2 = list2; 

        while (current1 != nullptr && current2 != nullptr) {
            if (current1->val <= current2->val) {
                ourCurrent->next = current1; 
                ourCurrent = ourCurrent->next; 
                current1 = current1->next; 
            } else { // current2->val < current1->val
                ourCurrent->next = current2; 
                ourCurrent = ourCurrent->next; 
                current2 = current2->next; 
            }
        }

        while (current1 != nullptr || current2 != nullptr) {
            if (current1 != nullptr) {
                ourCurrent->next = current1; 
                current1 = current1->next; 
                ourCurrent = ourCurrent->next; 
            } else { //current2 != nullptr
                ourCurrent->next = current2; 
                current2 = current2->next; 
                ourCurrent = ourCurrent->next; 
            }
        }

        return dummy.next; 

    }
};
