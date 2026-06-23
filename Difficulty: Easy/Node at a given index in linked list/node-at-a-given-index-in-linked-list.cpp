/* Print he nth node in the linked list Node is defined as
/* Link list node
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list

class Solution {
  public:
    int GetNth(Node *head, int index) {
        // Code Here
        Node* temp=head;
        
        while(temp!=NULL){
            if(index==1) return temp->data;
            
            index--;
            temp=temp->next;
        }
        return -1;
    }
};