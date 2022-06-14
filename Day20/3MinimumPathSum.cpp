class Solution {
public:
    
    int f(int i,int j, vector<vector<int>>& grid, vector<vector<int>>& dp)
    {   
        if(i==0 and j==0) return grid[i][j];
        if(i<0 || j<0) return 1e6;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int left = grid[i][j] + f(i-1,j,grid,dp);
        int up = grid[i][j] + f(i,j-1,grid,dp);
        
        int mini = min(left,up);
        
        return dp[i][j] = mini;
    }
    
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        return f(m-1,n-1,grid,dp);
    }
};