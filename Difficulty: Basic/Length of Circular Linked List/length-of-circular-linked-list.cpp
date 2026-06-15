/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    int getLength(Node *head) {
        // code here
        int cnt=1;
        Node* temp=head->next;;
        while(temp!=head){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
};