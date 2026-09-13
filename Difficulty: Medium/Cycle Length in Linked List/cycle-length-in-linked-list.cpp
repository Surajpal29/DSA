/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        if (!head || !head->next) return 0;

        Node *fast = head;
        Node *slow = head;
        bool hasloop = false;

        // Use && so fast->next is guaranteed non-null before checking fast->next->next
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                hasloop = true;
                break;
            }
        }

        if (!hasloop) return 0;

        // Traverse the cycle to count nodes
        int ans = 0;
        Node *temp = slow;
        do {
            ans++;
            temp = temp->next;
        } while (temp != slow);

        return ans;
    }
};