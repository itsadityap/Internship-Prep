class Solution 
{
public:
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans;
        vector<int> pat;
        DFS(9, pat, ans, 0, k, n);
        return ans;
    }
    
    void DFS(int s, vector<int>& pat, vector<vector<int>>& ans,int digits, int k, int n) 
    {
        if (n == 0 && digits == k) 
        {
            ans.push_back(pat);
            return;
        }
        
        if (n <= 0 && digits != k) 
        {
            return;
        }
        
        for (int i = s; i >= 1; i--) 
        {
            if (n >= i) 
            {
                pat.push_back(i);
                DFS(i - 1, pat, ans, digits + 1, k, n - i);
                pat.pop_back();
            }
        }
    }
};