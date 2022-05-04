class Solution 
{
    public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int count = 0;
        unordered_map<int,int> mpp;
        
        for(int n : nums)
        {
            if(mpp[k-n] > 0)
            {
                count++;
                mpp[k-n]--;
            }
            else
            {
                mpp[n]++;
            }
        }
        
        return count;
    }
};