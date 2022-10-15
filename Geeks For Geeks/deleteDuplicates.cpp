/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* dup = head;
 while(dup != NULL && dup->next != NULL)
 {
     Node* temp = dup->next;
     if(dup->data == temp->data)
     dup->next = temp->next;
     else
     dup = temp;
 }
 return head;
}
