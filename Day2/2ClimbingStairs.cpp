class Solution 
{   
    public:
    //const int N = 46;
    int dp[46];
    
    int helper(int n)
    {
        if(n==0 || n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        
        return dp[n] = helper(n-1) + helper(n-2);
    }
    
    int climbStairs(int n) 
    {   
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        memset(dp,-1,sizeof(dp));
        
        return helper(n);
    }
};