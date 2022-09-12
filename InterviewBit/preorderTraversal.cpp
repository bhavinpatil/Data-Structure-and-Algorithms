/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void pre(TreeNode* A, vector<int>&ans){
     if(!A) return;
     ans.push_back(A->val);
     pre(A->left, ans);
     pre(A->right, ans);
 }
 
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int>ans;
    pre(A, ans);
    return ans;
}
