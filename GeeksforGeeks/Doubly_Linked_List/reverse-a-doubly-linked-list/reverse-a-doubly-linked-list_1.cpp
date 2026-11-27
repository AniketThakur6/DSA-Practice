/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
  
    Node* reverseDLL(Node* curr,Node* back){
        
        if(curr==NULL)
        return back;
        
        curr->prev = curr->next;
        curr->next = back;
        
        return reverseDLL(curr->prev,curr);
    }
  
    Node *reverse(Node *head) {
        // code here
        return reverseDLL(head,NULL);
    }
};