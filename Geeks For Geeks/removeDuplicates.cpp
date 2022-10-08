/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int>mp;
     if(head==NULL) return head;
     Node* curr = head->next;
     Node* prev = head;
     mp[head->data]++;
     while(curr!=NULL)
     {
         if(++mp[curr->data] > 1)
         prev->next = curr->next;
         else
         prev = prev->next;
         curr=curr->next;
     }
     return head;
    }
};
