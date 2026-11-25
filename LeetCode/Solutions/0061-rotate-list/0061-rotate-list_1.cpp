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
    ListNode* rotateRight(ListNode* head, int k) {
        // if head==NULL (no LL)
        // id head->next = NULL means only 1 node in LL
        if(head==NULL || head->next == NULL)
        return head;

        //count no of nodes
        int count = 0;
        ListNode *temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }

        //only rotate required no of times
        k=k%count;

        if(k==0)
        return head;

        // no of need to move to front
        count-=k;
        ListNode *curr= head, *prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }

        // prev node become last
        prev->next = NULL; 

        //pointer to last node
        ListNode *tail = curr;

        while(tail->next)
        tail=tail->next;

        tail->next = head;
        head=curr;
        return head; 
    }
};