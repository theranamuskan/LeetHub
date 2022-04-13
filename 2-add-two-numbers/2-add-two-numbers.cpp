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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(); // creating dummy node
        ListNode *temp = dummy;           // creating temp which copies the dummy node
        int carry = 0;                    // assigning carry to zero
        while (l1 != NULL || l2 != NULL || carry)
        {                // we iterate till either of them become null
            int sum = 0; // we are going to initilize the sum equals to zero before every iteration
            if (l1 != NULL)
            { // if l1 is not null

                sum += l1->val; 
                l1=l1->next;
            }
            if (l2 != NULL)
            {                   // if l2 is not null
                sum += l2->val; // add l1 to the sum
                l2 = l2->next;  // move l1 to the next
            }
            sum += carry;                            // adding carry to the sum
            carry = sum / 10;                        // carry will always initilize the sum by 10 means first digit(ones)
            ListNode *node = new ListNode(sum % 10); // create a new node and assign the value sum modulo ten (remainder)
            temp->next = node;                       // point the next link of temp to the current node created
            temp = temp->next;                       // move the temp to the next
        }
        return dummy->next; // dummy node will have the next node which will have the summation
    }
};