/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int LLsize=0;
        Node * temp=head;
        while(temp){
            LLsize++;
            temp=temp->next;
        }
        if(LLsize<k) return -1;
        LLsize-=k;
        temp=head;
        while(LLsize--){
            temp=temp->next;
        }
        return temp->data;
    }
};