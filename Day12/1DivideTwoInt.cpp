class Solution 
{
    public:
    int divide(int dividend, int divisor) 
    {
        if(dividend == 1<<31 and divisor == -1) return INT_MAX;
        
        bool sign = ((dividend>=0) == (divisor>=0)) ? true : false;
        
        long long divd = abs(dividend);
        long long divi = abs(divisor);
        
        int result = 0;
        
        while(divd - divi >= 0)
        {
            long long count = 0;
            while(divd >= (divi << 1 << count))
            {
                count++;
            }
            
            result += (1 << count);
            divd -= (divi << count);
        }
        return sign ? result: -1LL*result;
    }
};