/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
    public:
    int getDecimalValue(ListNode* head) 
    {
        string s;
        while(head!=NULL)
        {
            s+= to_string(head->val);
            head=head->next;
        }
        
        reverse(s.begin(),s.end());
        
        int num=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                num+=pow(2,i);
            }
        }
        
        return num;
    }
};