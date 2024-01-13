//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
          // insertion sort on linked list ....
        Node* newhead = NULL;
        Node* temp =head_ref;
        if( temp == NULL ) return NULL;
        
        while( temp != NULL ){
            // find position for the node pointed by temp in sorted linked list ...
            Node* ptr=newhead,*prev=NULL;
            while( ptr != NULL ){
                if( ptr->data > temp ->data ){
                    break;
                }
                prev=ptr;
                ptr=ptr->next;
            }
            
            // placing the node in sorted linked list .....
            if( newhead == NULL ){
                newhead = temp;
                temp=temp->next;
                newhead -> next = NULL;
                
            }
            else{
                if( prev == NULL ){
                    // newhead is going to get updataed ...
                    Node *p1=temp;
                    temp=temp->next;
                    p1 ->next = newhead ;
                    newhead = p1;
                }
                else{
                    // node is being inserted in between of sorted linked list ....
                    Node* p2 = temp ;
                    temp=temp->next;
                    prev->next=p2;
                    p2->next=ptr;
                }
            }
            
            
        }
        return newhead;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends