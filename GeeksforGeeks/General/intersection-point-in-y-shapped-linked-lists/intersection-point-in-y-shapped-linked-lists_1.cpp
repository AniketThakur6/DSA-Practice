/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  code here
        
        //making list1 circular
        Node* curr1 = head1;
        
        while(curr1->next)
        curr1=curr1->next;
        
        curr1->next = head1;
        
        //detect loop
        Node* slow ,*fast;
        slow=fast=head2;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow == fast)
            break;
        }
        
        // if loop or intersection  dont exist
        if(fast == NULL || fast->next == NULL)
        return NULL;
        
        //finding where loop starting node is
        slow = head2;
        
        while(slow != fast){
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow;
    }
};