/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node *slow,*fast;
        slow=fast=head;
        
        //detect is loop present
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            break;
        }
        
        // reason for loop breaking
        if(fast == NULL || fast->next == NULL)
        return 0;
        
        int count =1 ;
        slow = fast->next;
        
        while(slow != fast)
        {
            count++;
            slow=slow->next;
        }
        
        return count;
    }
};