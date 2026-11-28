/*
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
  
    Node* reverse(Node*curr,Node*prev){
        if(curr==NULL)
        return prev;
        
        Node* front = curr->next;
        curr->next = prev;
        
        return reverse(front,curr);
    }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        Node* first = reverse(head1,NULL);
        Node* second = reverse(head2,NULL);
        
        Node*curr1=first,*curr2=second;
        
        // create new list
        Node *head = new Node(0);
        Node *tail = head;
        int sum = 0 ,carry=0;
        
        while(curr1 && curr2){
            sum = curr1->data + curr2->data + carry;
            tail->next=new Node(sum%10);
            curr1=curr1->next;
            curr2=curr2->next;
            tail=tail->next;
            carry=sum/10;
        }
        
        // if list1 node is left
        while(curr1){
            sum = curr1->data+carry;
            tail->next=new Node(sum%10);
            curr1=curr1->next;
            tail=tail->next;
            carry=sum/10;
        }
        
        // if list2 node is left
        while(curr2){
            sum = curr2->data+carry;
            tail->next=new Node(sum%10);
            curr2=curr2->next;
            tail=tail->next;
            carry=sum/10;
        }
        
        // adding rename carry in node 
        if(carry)
        tail->next=new Node(carry);
        
        //reversing new list
        head = reverse(head->next,NULL);
        
        // Remove leading zeros
        while(head && head->data==0){
            Node* temp = head;
            head=head->next;
            delete temp;
        }
        
        // If all nodes were zero, return a single zero node
        if (head == NULL)
            return new Node(0);
        
        return head;
    }
};