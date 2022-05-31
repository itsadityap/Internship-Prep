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
    private:
    void dfs(TreeNode *node, vector<int> &preorder)
    {
        if(node==NULL)
        {   
            preorder.push_back(0);
            return ;
        }
        
        preorder.push_back(node->val);
        dfs(node->left,preorder);
        dfs(node->right,preorder);
    }
    
    public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {   
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        vector<int> pvec,qvec;
        dfs(p,pvec);
        dfs(q,qvec);
        
        if(pvec==qvec) return true;
        else return false;
    }
};