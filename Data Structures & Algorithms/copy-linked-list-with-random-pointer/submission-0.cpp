/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (head == nullptr) {
            return nullptr; 
        }

        // Phase 1: Interweave the copy nodes directly behind the originals
        Node* curr = head; 
        while (curr != nullptr) {
            Node *clone = new Node(curr->val);
            clone->next = curr->next; 
            curr->next = clone;
            curr = clone->next; 
        }

        // Phase 2: Copy the random pointers using the zipped structure
        curr = head; 
        while (curr != nullptr) {
            if (curr->random != nullptr) {
                curr->next->random = curr->random->next; 
            }
            curr = curr->next->next; // jump to the next node's clone 
        }

        // Phase 3: Untangle the lists 
        curr = head; 
        Node dummy(0);
        Node* copy_curr = &dummy;

        while (curr != nullptr) {
            Node* clone = curr->next; 

            // Add clone to the deep copied list 
            copy_curr->next = clone; 
            copy_curr = copy_curr->next; 

            // Restore original list 
            curr->next = clone->next; 
            curr = curr->next; 
        }

        return dummy.next; 

    }
};
