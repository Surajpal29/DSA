/*

class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node* makeUnion(Node* head1, Node* head2) {
        // code here
          unordered_set<int>s;
          
          Node* dummy=new Node(0);
          Node* tail=dummy;
          
          Node* curr1=head1;
          while(curr1!=NULL){
              if(s.find(curr1->data)==s.end()){
                  s.insert(curr1->data);
                  tail->next=new Node(curr1->data);
                  tail=tail->next;
              }
              curr1=curr1->next;
          }
          
          Node* curr2=head2;
          while(curr2!=NULL){
              if(s.find(curr2->data)==s.end()){
                  s.insert(curr2->data);
                  tail->next=new Node(curr2->data);
                  tail=tail->next;
              }
              curr2=curr2->next;
          }
          return dummy->next;
    }
};