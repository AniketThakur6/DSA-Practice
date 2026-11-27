/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        // code here
        if(p==0)
        {
            if(head==NULL){
                head = new Node(x);
                return head;
            }
            else 
            {
                Node* temp = new Node(x);
                temp->next = head->next;
                temp->prev = head;
                head->next->prev = temp;
                head->next = temp;
                
                return head;
            }
        }
        else
        {
            Node* curr = head;
            
            while(p--)
            curr=curr->next;
            
            if(curr->next==NULL){
                Node* temp = new Node(x);
                curr->next = temp;
                temp->prev = curr;
                
                return head;
            }
            else
            {
                Node* temp = new Node(x);
                temp->next = curr->next;
                temp->prev = curr;
                curr->next = temp;
                temp->next->prev= temp;
                
                return  head;
            }
            
        }
        
    }
};