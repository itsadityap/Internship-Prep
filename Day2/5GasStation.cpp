class Solution 
{
    public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        vector<int> diff;
        int sumgas = accumulate(gas.begin(),gas.end(),0);
        int costsum = accumulate(cost.begin(),cost.end(),0);
        if(costsum>sumgas)
        {
            return -1;
        }
        
        int remainingGas = 0,start=0;
        for(int i=0;i<gas.size();i++)
        {
            remainingGas += gas[i] - cost[i];
            if(remainingGas<0)
            {
                start=i+1;
                remainingGas = 0;
            }
        }
        
        return start;
    }
};