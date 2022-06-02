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
    void dfspre(TreeNode *node, vector<int> &l)
    {   
        if(node==NULL) 
        {   
            l.push_back(0);
            return;
        }
        l.push_back(node->val);
        dfspre(node->left,l);
        dfspre(node->right,l);
    }
    
    void dfspost(TreeNode *node, vector<int> &r)
    {   
        if(node==NULL) 
        {   
            r.push_back(0);
            return;
        }
        r.push_back(node->val);
        dfspost(node->right,r);
        dfspost(node->left,r);
    }
    
    
public:
    bool isSymmetric(TreeNode* root) 
    {
        if(!root) return true; 
            
        vector<int> l,r;

        dfspre(root->left,l);
        dfspost(root->right,r);
        
        for(auto x: l)
        {
            cout<<x<<" ";
        }
        
        if(l == r) return true;
        return false;
    }
};