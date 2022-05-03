class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int length = nums.size();
        for(int i=0;i<length;i++)
        {
            if(nums[abs(nums[i])]>=0)
            {
                nums[abs(nums[i])] = - nums[abs(nums[i])];
            }
            
            else
            {
                return abs(nums[i]);
            }
        }
        return 0;
    }
};