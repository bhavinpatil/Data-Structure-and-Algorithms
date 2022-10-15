/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
    void order(Node* root, vector<int>&ans)
    {
        if(root==NULL) return;
        order(root->left, ans);
        ans.push_back(root->data);
        order(root->right, ans);
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>ans;
        order(root, ans);
        return ans;
    }
};
