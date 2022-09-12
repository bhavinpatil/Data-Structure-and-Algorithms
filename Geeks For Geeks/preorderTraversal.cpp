void preorderTraversal(Node* root, vector<int>&ans)
{
    if(!root) return;
    ans.push_back(root->data);
    preorderTraversal(root->left, ans);
    preorderTraversal(root->right, ans);
}
vector <int> preorder(Node* root)
{
    vector<int>ans;
    preorderTraversal(root, ans);
    return ans;
}
