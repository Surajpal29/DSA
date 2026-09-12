/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        if (!head || !head->next) return;

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect loop using Floyd's algorithm
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) break;
        }

        // If no loop exists
        if (slow != fast) return;

        // Step 2: Find start of the loop and break it
        slow = head;

        // Corner Case: Loop starts at the head node
        if (slow == fast) {
            while (fast->next != slow) {
                fast = fast->next;
            }
            fast->next = nullptr;
            return;
        }

        // General Case: Loop starts elsewhere
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // Unlink the last node of the loop
        fast->next = nullptr;
    }
};