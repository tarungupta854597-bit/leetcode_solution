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
    int getDecimalValue(ListNode* head) {
        stack<int> a;
        while(head!=NULL)
        {
            a.push(head->val);
            head=head->next;
        }
        int result=0;
        int i=0;
        while(!a.empty())
        {
            cout<<"hi";
            result+=pow(2,i)*a.top();
            a.pop();
            i++;
        }
        return result;
        
    }
};