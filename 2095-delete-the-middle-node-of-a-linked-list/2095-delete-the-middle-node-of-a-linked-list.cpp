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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            head=head->next;
            return head;
        }
        ListNode* temp = head;
        int count = 1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        int idx = count/2;
        temp=head;
        while(idx>=1){
            if(idx==1){
                temp->next=temp->next->next;
            }
            temp=temp->next;
            idx--;
        }
        return head;
    }
};