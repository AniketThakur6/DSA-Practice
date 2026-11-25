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
        vector <int> arr;
        ListNode *temp =head;

        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        int size = arr.size();

        k=k%size;

        if(k==0)
        return head;

        size-=k;

        temp= head;

        int i = size;
        while(temp){

            if(i==arr.size())
            i=0;    

            temp->val = arr[i];
            temp=temp->next;
            i++;
        }

        return head;

    }
};