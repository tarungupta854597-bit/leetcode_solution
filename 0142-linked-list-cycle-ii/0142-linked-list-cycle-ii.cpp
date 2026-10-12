/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        bool a=false;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                a=true;
                break;
            }
        }
        slow=head;
        while(slow!=fast && a)
        {
           slow=slow->next;
           fast=fast->next;
        }
        if(a)
        return fast;
        else
        return NULL;
    }
};