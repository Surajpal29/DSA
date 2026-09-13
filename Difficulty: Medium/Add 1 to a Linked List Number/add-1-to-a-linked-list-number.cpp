/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* reverseList(Node* head){
        if(head==nullptr || head->next==nullptr) return head;
        
        Node* curr=head;
        Node* prev=nullptr;
        
        while(curr!=nullptr){
            Node* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    
    Node* addOne(Node* head) {
        // code here
        head=reverseList(head);
        
        Node* temp = head;
                Node* prev = nullptr;
                int carry = 1;

                while (temp != nullptr && carry > 0) {
                    int sum = temp->data + carry;
                    temp->data = sum % 10;
                    carry = sum / 10;
                    prev = temp;
                    temp = temp->next;
                }

                // If carry remains (e.g., 999 + 1 = 1000), append a new node
                if (carry > 0) {
                    prev->next = new Node(carry);
                }

                head = reverseList(head);
                return head;
    }
};