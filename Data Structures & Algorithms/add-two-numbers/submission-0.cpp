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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        
        int ans = 0;
        int carry = 0;

        while(l1 || l2 || carry)
        {

            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
 
            ans = x + y + carry;

            carry = ans/10;
            ans = ans%10;

            
            ListNode* temp2 = new ListNode(ans);
            temp->next = temp2;
            temp = temp->next;

            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }

        
        return head->next;
        
    }
};
