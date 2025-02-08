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
    bool hasCycle(ListNode *head) {
        while(head!=NULL)
        {
               if(head==head->next)
               {
                return true;
               }
               ListNode *p=head->next;
               head->next=head;
               head=p;
        }
        return false;
    }
};