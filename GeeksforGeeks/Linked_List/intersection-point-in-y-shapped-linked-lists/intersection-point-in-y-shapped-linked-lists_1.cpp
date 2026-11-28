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
        Node* curr1 = head1, *curr2 = head2;
        int count1 =0 ,count2 = 0;
        
        //count no of node in list 1
        while(curr1){
            count1++;
            curr1=curr1->next;
        }
        
        // count no of node in list2
        while(curr2){
            count2++;
            curr2=curr2->next;
        }
        
        // start both from head
        curr1=head1,curr2=head2;
        
        //if list1 > list2
        while(count1>count2){
            count1--;
            curr1=curr1->next;
        }
        
        //if list2 > list1
        while(count2>count1){
            count2--;
            curr2=curr2->next;
        }
        
        // where they both meet there intersection exist
        while(curr1 != curr2){
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        
        // if they don't meet
        if(!curr1)
        return NULL;
        
        return curr1;
    }
};