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
class Solution 
{   
    int sum = 0;
    public:
    int deepestLeavesSum(TreeNode* root) 
    {
        int maxdepth = maxDepth(root);
        findSum(root,1,maxdepth);
        return sum;
    }
    
    int maxDepth(TreeNode *root)
    {
        if (root== NULL) return NULL;
        
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
    
    void findSum(TreeNode*root, int curr, int &depth)
    {
        if(root!=NULL)
        {
            if(curr == depth)
            {
                sum += root->val;
            }
            findSum(root->left,curr+1,depth);
            findSum(root->right,curr+1,depth);
        }
    }
};