class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int len = nums.size(), zero = 0, one = 0, two = 0;
        for (int i = 0; i < len; i++)
        {
            if (nums[i] == 0)
            {
                zero++;
            }
            else if (nums[i] == 1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }

        for (int j = 0; j < len; j++)
        {
            if (j < zero)
                nums[j] = 0;
            else if (j < zero + one)
                nums[j] = 1;
            else
                nums[j] = 2;
        }
    }
};