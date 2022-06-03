/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> rview;
        helper(root,rview,0);
        return rview;
    }
    
    void helper(TreeNode* root, vector<int> &rview, int level)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(rview.size()==level) rview.push_back(root->val);
        
        helper(root->right,rview,level+1);
        helper(root->left,rview,level+1);
    }
};