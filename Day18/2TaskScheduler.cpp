class Solution 
{
    public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        vector<int> freq(26,0);    
        for(auto ch: tasks)
        {
            freq[ch-'A']++;
        }
         
        sort(freq.begin(),freq.end());
        
        int maxfreq = freq[25];
        
        int idle_time = (maxfreq - 1) * n;
        
        for(int i=24 ; i>=0 ;i--)
        {
            idle_time -= min(maxfreq-1, freq[i]);
        }
        idle_time = max(0,idle_time);
        
        return idle_time + tasks.size();
    }
};