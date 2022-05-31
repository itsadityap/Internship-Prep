class Solution 
{
    public:
    int reverse(int x) 
    {
        int fin;
        string s = to_string(x);
        if(s[0]=='-')
        {
            std::reverse(s.begin()+1,s.end());
            fin = stoi(s);
        }
        else
        {
            std::reverse(s.begin(),s.end());
            fin = stoi(s);
        }
        return fin;
    }
};