class Solution 
{
    public:
    
    // Z-Function String Algo
    vector<int> z_function(string s) 
        {
            int n = (int) s.length();
            vector<int> z(n);
            for (int i = 1, l = 0, r = 0; i < n; ++i) 
            {
                if (i <= r)
                    z[i] = min (r - i + 1, z[i - l]);
                while (i + z[i] < n && s[z[i]] == s[i + z[i]])
                    ++z[i];
                if (i + z[i] - 1 > r)
                    l = i, r = i + z[i] - 1;
            }
            return z;
        } 
    
    int strStr(string haystack, string needle) 
    {     
        string newString = needle +'$' + haystack;
        
        vector<int> z = z_function(newString);
        
        for(int i=0;i<newString.length();i++)
        {
            if(z[i] == needle.length())
                return i - needle.length() - 1;
        }
        return -1;
    }
};