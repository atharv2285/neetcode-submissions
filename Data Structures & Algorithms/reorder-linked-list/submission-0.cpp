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
    void reorderList(ListNode* head) 
    {
        unordered_map <int, ListNode* > mp;
        ListNode* temp = head;
        int c = 0;

        while(temp)
        {
            mp[c]=temp;
            c++;
            temp = temp->next;
        }
    

        temp = head;

        for(int i=1;i < c; i++)
        {
            int t;
           
            if (i % 2 != 0)
            {
                t = c - 1 - i / 2;
            }
            else
            {
                t = i / 2;
            }
            temp->next = mp[t];
            temp = temp->next;            
        }
            temp->next = nullptr;
    }
};
