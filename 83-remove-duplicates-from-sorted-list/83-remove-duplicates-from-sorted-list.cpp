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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *curr_element = head;
        while (curr_element && curr_element->next)
        {
            if (curr_element->val == curr_element->next->val)
            {
                ListNode *temp = curr_element->next;
                curr_element->next = curr_element->next->next;
                delete temp;
            }
            else{
                curr_element=curr_element->next;
            }
           
        }
         return head;
    }
};