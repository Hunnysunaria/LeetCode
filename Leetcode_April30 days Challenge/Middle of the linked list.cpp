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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast= head;
        ListNode* start=head;
        while(fast!= NULL&& fast->next!=NULL){
            start=start->next;
            fast=fast->next->next;    
        }
       
        return start;
    }
    
      
       

};