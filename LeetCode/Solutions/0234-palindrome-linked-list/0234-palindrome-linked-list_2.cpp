/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL)
        return 1;

        // counting no of node    
        int count = 0;
        ListNode *temp = head;

        while(temp){
            count++;
            temp=temp->next;
        }

        // middle point
        count/=2;

        // no of node skip to get to middle
        ListNode *curr = head, *prev=NULL;

        while(count--){
            prev=curr;
            curr=curr->next;
        }

        // break from middle
        prev->next = NULL;

        //reversing the 2nd broken list
        ListNode *fut = NULL;
        prev=NULL;

        while(curr){
            fut=curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut; 
        }

        // comparing both the list
        ListNode *head1 = head, *head2 = prev;

        while(head1){
            if(head1->val != head2 ->val)
            return 0;

            head1=head1->next;
            head2=head2->next;
        }    

        return 1;
    }
};