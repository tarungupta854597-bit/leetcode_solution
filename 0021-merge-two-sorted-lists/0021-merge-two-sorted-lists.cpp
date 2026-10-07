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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
        {
            return NULL;
        }
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* result;
          if (temp1!=NULL && (temp2==NULL || temp1->val<=temp2->val)) {
            result = new ListNode(temp1->val);
            temp1 = temp1->next;
        }
        else {
            result = new ListNode(temp2->val);
            temp2 = temp2->next;
        }
        ListNode* result1=result;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<=temp2->val)
            {
              result->next=new ListNode(temp1->val);;
              temp1=temp1->next;
            }
            else
            {
                result->next=new ListNode(temp2->val);
                temp2=temp2->next;
            }
            result=result->next;

        }
        while(temp1!=NULL)
        {
            result->next=new ListNode(temp1->val);
            temp1=temp1->next;
            result=result->next;
        }
         while(temp2!=NULL)
        {
            result->next=new ListNode(temp2->val);
            temp2=temp2->next;
            result=result->next;
        }
        return result1;
    }
};