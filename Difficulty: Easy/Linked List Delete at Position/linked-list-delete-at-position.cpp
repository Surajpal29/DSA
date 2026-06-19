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
Node *deleteAtPosition(Node *head, int pos) {
    // code here
    if(pos==1) return head->next;
    Node* temp=head;
    while(pos--){
        if(pos==1){
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    return head;
}