class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq, q;
        
        
        vector<int>ans;
        
        for(int i=0; i<nums.size(); i++)
        {
            pq.push({nums[i], i});
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        while(!pq.empty())
        {
            q.push({pq.top().second, pq.top().first});
            pq.pop();
        }
        
        // while(!q.empty())
        // {
        //     cout<<q.top().first<< " "<<q.top().second<<"\n";
        //     q.pop();
        // }
        
        while(!q.empty())
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        
        return ans;
    }
};