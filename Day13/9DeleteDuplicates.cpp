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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode *dummy = head;
        
        while(dummy and dummy->next)
        {
            if(dummy->val == dummy->next->val)
            {
                ListNode* temp = dummy -> next; //Just for good coding practice
                dummy -> next = dummy -> next ->next;
                delete temp; //Deleting dangling pointer
            }
            else
            {
                dummy = dummy -> next;
            }
        }
        
        return head;
    }
};