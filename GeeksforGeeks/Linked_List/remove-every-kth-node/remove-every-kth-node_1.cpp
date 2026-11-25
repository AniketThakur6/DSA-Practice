/* Structure for Link list node
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
    Node* deleteK(Node* head, int k) {
        // code here
        if(k<=1){
            while(head){
                Node *temp=head;
                head=head->next;
                delete temp;
            }
            
            return NULL;
        }
        
        Node *curr=head, *prev=NULL;
        int count=1;
        
        while(curr){
            if(count==k){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
                count=1;
            }else{
                prev=curr;
                curr=curr->next;
                count++;
            }
        }
        
        return head;
    }
};