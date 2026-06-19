/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        Node* temp=head;
        Node* insertNode=new Node(val);
        
        if(pos==1){
            insertNode->next=temp;
            return insertNode;
        }
        
        while(pos--){
            if(pos==1){
                insertNode->next=temp->next;
                temp->next=insertNode;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};