/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        vector<int> ans;
        ans.push_back(head->data);
        Node* curr = head->next;
        
        //copy unique value in arr
        while(curr){
            if(ans[ans.size()-1] != curr->data)
            ans.push_back(curr->data);
            
            curr=curr->next;
        }
        
        //curr from start and prev to point previos node 
        curr=head;
        Node* prev = NULL;
        int index = 0;
        
        // copy unique value in ll
        while(index < ans.size()){
            curr->data = ans[index++];
            prev=curr;
            curr=curr->next;
        }
        
        // break ll at end
        prev->next = NULL;
        
        return head;
    }
};