/* Linked List Node Structure
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
} */

class Solution {
  public:
  
    // bool check(vector<Node*> &visited,Node* curr){
    //     for(int i=0;i<visited.size();i++){
    //         if(visited[i]==curr)
    //         return 1;
    //     }
        
    //     return 0;
    // }
  
    bool detectLoop(Node* head) {
        // code here
        Node* curr = head;
        // vector<Node*> visited;
        
        unordered_map<Node*,bool> visited;
        
        while(curr){
            if(visited[curr]==1)
            return 1;
            
            visited[curr]=1;
            curr=curr->next;
        }
        
        return 0;
    }
};