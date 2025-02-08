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
         set<ListNode*> mySet;
        while(head!=NULL)
        {
               auto result=mySet.insert(head);
               if(!result.second)
               {
                  return head;
               }
               head=head->next;
        }
        return head;
    }
};