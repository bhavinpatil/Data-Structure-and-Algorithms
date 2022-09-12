/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>>ans;
    queue<TreeNode*>q;
    q.push(A);
    if(A==NULL) return ans;
    while(!q.empty())
    {
        int x = q.size();
        vector<int> val;
        while(x--)
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            val.push_back(temp->val);
        }
        ans.push_back(val);
    }
    return ans;
}
