/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        ListNode* curr = head;
        ListNode* start= head;
        int pos= 1;
        
        while(pos < m){
              
            start = curr;
            curr = curr->next;
            pos++;
        }
        
        ListNode* newList = NULL;
        ListNode* tail = curr;
        
        while(pos >=m && pos <=n){
            
            ListNode* next = curr->next;
            curr->next = newList;
            newList = curr;
            curr = next;
            pos++;
