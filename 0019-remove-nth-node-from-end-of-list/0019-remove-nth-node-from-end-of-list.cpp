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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        if(head->next == NULL){
            head=NULL;
            return head;
        }
        int count = 1;
        while(temp->next!=NULL){
            temp = temp->next;
            count++;
        }
        if(count==n){
            return head->next;
        }
        int skip = count-n;
        ListNode* temp2 = head;
        while(temp2!=NULL){
            if(skip==1){
                temp2->next = temp2->next->next;
            }
            temp2 = temp2->next;
            skip--;
        }
        return head;
    }
};