/* Strucutre of a link list node
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
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        if(head==NULL) return new Node(x);
        
       Node* low=head;
       Node* fast=head;
       
       while(fast->next!=NULL && fast->next->next!=NULL){
           fast=fast->next->next;
           low=low->next;
       }
       
       Node* temp=new Node(x);
       temp->next=low->next;
       low->next=temp;
       
       return head;
    }
};