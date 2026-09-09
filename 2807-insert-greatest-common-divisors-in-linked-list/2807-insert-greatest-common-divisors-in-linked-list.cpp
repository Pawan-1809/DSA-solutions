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
private:
    int GCD(int a, int b){
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head->next;

        while(second!=NULL){
            int value = GCD(first->val, second->val);
            ListNode* temp = new ListNode(value);
            first->next = temp;
            temp->next = second;
            first = second;
            second = second->next;
        }
        return head;
    }
};