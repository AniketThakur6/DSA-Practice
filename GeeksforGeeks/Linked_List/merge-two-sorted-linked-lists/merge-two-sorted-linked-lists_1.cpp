/*  Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *head = NULL, *prev = NULL;

          while (head1 && head2)
          {
            if (head1->data <= head2->data)
            {
              if (prev == NULL)
              {
                head = new Node(head1->data);
                prev = head;
                head1 = head1->next;
              }
              else
              {
                Node *temp = new Node(head1->data);
                prev->next = temp;
                prev = temp;
                head1 = head1->next;
              }
            }
            else
            {
              if (prev == NULL)
              {
                head = new Node(head2->data);
                prev = head;
                head2 = head2->next;
              }
              else
              {
                Node *temp = new Node(head2->data);
                prev->next = temp;
                prev = temp;
                head2 = head2->next;
              }
            }
          }

          // if head1 is left
          while (head1)
          {
            Node *temp = new Node(head1->data);
            prev->next = temp;
            prev = temp;
            head1 = head1->next;
          }

          // if head2 is left
          while (head2)
          {
            Node *temp = new Node(head2->data);
            prev->next = temp;
            prev = temp;
            head2 = head2->next;
          }

          return head;
    }
};