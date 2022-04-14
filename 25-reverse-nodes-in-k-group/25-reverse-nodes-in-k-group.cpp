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
    // To find the length 
    int Length_Linked_List(ListNode* head){
            int length=0; // length of the linked list is zero at start
            ListNode* temp = head;// initially temp is on head
            while(temp!=NULL){
                temp=temp->next; // iterate to all element in that list
                length++; //increse the length by one on every iteration
            }
            return length; // total calculated length
        }
    
    // using recursion after k groups intially
    
    ListNode* reverseKGroup(ListNode* head, int k,int length) {
    if(length<k){
        return head;
    }
       int count=0;
        ListNode* prev=NULL,*next=NULL,*curr=head;
        while(head!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next!=NULL){
            head->next=reverseKGroup(next,k,length-k);
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
         int length=Length_Linked_List(head);
        return reverseKGroup(head,k,length);
    }
};