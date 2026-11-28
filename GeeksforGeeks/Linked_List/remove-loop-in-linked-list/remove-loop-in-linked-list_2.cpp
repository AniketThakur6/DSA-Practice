/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node* slow = head, *fast = head;
        
        // detect loop
        while(fast && fast->next){
            slow=slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            break;
        }
        
        if(fast == NULL || fast->next == NULL)
        return;
        
        // where loop start
        slow = slow->next;
        int count = 1;

        while(slow != fast){
            slow=slow->next;
            count++;
        }
        
        // slow= head , fast = slow + no of node
        slow=fast=head;
        while(count--)
        fast=fast->next;
        
        //where both meet loop start their
        while(slow != fast){
            slow=slow->next;
            fast=fast->next;
        }
        
        // prev node of where loop start
        while(slow->next != fast)
        slow=slow->next;
        
        slow->next=NULL;
    }
};