/* Node is defined as
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
    Node* segregate(Node* head) {
        // code here
        Node *curr = head;
        
        // create 3 new list where where we add the 0,1,2 nodes
        Node *head0 = new Node(0), *tail0 = head0;
        Node *head1 = new Node(0), *tail1 = head1;
        Node *head2 = new Node(0), *tail2 = head2;

        while(curr){
            if(curr->data == 0){
                tail0->next = curr;
                curr=curr->next;
                tail0=tail0->next;
                tail0->next=NULL;
            }else if(curr->data == 1){
               tail1->next=curr;
               curr=curr->next;
               tail1=tail1->next;
               tail1->next=NULL;
            }else{
                tail2->next=curr;
                curr=curr->next;
                tail2=tail2->next;
                tail2->next=NULL;
            }
        }
        
        //store head pointer
        Node *first0 = head0->next;
        Node *first1 = head1->next;
        Node *first2 = head2->next;
        
        // Store actual tail pointers (NULL if list is empty)
        Node *last0 = first0 ? tail0 : NULL;
        Node *last1 = first1 ? tail1 : NULL;
        
        //delete start of all 3 list
        delete head0;
        delete head1;
        delete head2;
        
        // Join the three lists
        if(last0)
        last0->next = first1 ?first1 : first2;
        
        if(last1)
        last1->next = first2;
        
        return  first0? first0 : first1 ? first1 : first2;
        
    }
};
    
    