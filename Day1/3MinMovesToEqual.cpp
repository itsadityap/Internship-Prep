int minMoves(vector<int>& nums) {
        int sum = 0 ;
        int mn = INT_MAX ;
        int n = nums.size() ;
        for (auto  i : nums)
        {
            sum += nums[i];
            mn = min(mn ,i) ;
        }
        return  sum-mn *n ;
    }