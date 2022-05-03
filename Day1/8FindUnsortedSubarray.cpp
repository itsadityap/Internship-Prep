class Solution 
{
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        vector<int> newnums = nums;
        sort(newnums.begin(),newnums.end());
        
        int firstmismatch = 0 ,lastmismatch = -1e5;
        bool firstmismatchfound = false;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != newnums[i] and !firstmismatchfound)
            {
                firstmismatch = i;
                firstmismatchfound = true;
            }
            
            if(nums[i] != newnums[i])
            {
                lastmismatch = max(i,lastmismatch);
            }
            
        }
        if(!firstmismatchfound) return 0;
        
        return lastmismatch-firstmismatch+1;
    }
};