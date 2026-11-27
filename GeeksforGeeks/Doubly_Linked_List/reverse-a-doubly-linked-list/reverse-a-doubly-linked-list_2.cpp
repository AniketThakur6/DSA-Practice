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
    Node *reverse(Node *head) {
        // code here
        Node *curr=head, *back = NULL;
        
        while(curr){
            curr->prev = curr->next;
            curr->next = back;
            back = curr;
            curr = curr->prev;
        }
        
        return back;
    }
};