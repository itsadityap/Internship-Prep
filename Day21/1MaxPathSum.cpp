class Solution 
{
public: 
    int f(int i,int j, vector<vector<int>> &matrix, vector<vector<int>> &dp)
    {    
        if(j<0 || j>= matrix[0].size()) return 1e8;
        if(i==0) return matrix[0][j];

        if(dp[i][j] != -1) return dp[i][j];
        int st = matrix[i][j] + f(i-1,j,matrix,dp);
        int le = matrix[i][j] + f(i-1,j-1,matrix,dp);
        int ri = matrix[i][j] + f(i-1,j+1,matrix,dp);

        return dp[i][j] = min(st,min(le,ri));
    }

    int minFallingPathSum(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int mini = 1e8;
        
        for(int j=0;j<m;j++)
        {
            mini = min(mini,f(n-1,j,matrix,dp));
        }
        return mini;
    }
};
