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
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // Base Case

        if (list1 == NULL)
        {
            return list2;
        }
        if (list2 == NULL)
        {
            return list1;
        }

        // Recursive Case
        ListNode *result;
        if (list1->val < list2->val)
        {

            result = list1;
            result->next = mergeTwoLists(list1->next, list2);
        }
        else
        {
            result = list2;
            result->next = mergeTwoLists(list1, list2->next);
        }
        return result;
    }
};