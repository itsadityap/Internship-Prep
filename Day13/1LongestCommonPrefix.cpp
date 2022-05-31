class Solution 
{
public:
    
    string findPrefix(string initial, string comp)
    {
        int minSize = min(initial.length(),comp.length());
        
        string LCP = "";
        for(int i = 0; i<minSize;i++)
        {
            if(initial[i] == comp [i])
            {
                LCP+=initial[i];
            }
            else break;
        }
        
        return LCP;
    }
    
    string longestCommonPrefix(vector<string>& strs) 
    {
        string initial = strs[0];
        int n = strs.size();
        for(int i=1;i<strs.size();i++)
        {
            initial = findPrefix(initial,strs[i]);
        }
        return initial;
    }
};