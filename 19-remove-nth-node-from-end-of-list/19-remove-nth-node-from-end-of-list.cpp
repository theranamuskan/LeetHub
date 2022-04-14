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

/* It is Two Pointer Approach */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * dummy=new ListNode(); //dummy node created 
        dummy->next=head; // dummy's next will point to the head of LinkedList
        ListNode *slow=dummy; //both slow and fast is pointing to dummy
        ListNode *fast=dummy;
        for(int i=1;i<=n;i++){ //moving fast as "n" iteration
            fast = fast->next;
        }
        
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        
        slow->next=slow->next->next;
        return dummy->next;
        
    }
};