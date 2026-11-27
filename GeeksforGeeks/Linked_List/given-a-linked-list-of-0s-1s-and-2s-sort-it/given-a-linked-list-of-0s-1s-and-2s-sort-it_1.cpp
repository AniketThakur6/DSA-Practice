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
        
        int count0,count1,count2;
        count0=count1=count2=0;
        
        // counting no of 1's, 0's & 2's
        while(curr){
            if(curr->data == 0)
            count0++;
            else if(curr->data == 1)
            count1++;
            else
            count2++;
            
            curr=curr->next;
        }
        
        curr=head;
        
        // filling 0 in list
        while(count0--){
            curr->data = 0;
            curr=curr->next;
        }
        
        // filling 1 in list
        while(count1--){
            curr->data = 1;
            curr=curr->next;
        }
        
        // filling 2 in list
        while(count2--){
            curr->data = 2;
            curr=curr->next;
        }
        
        return head;
    }
};