/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> c;
        int i = 0;
        Node* curr =head;
        while(curr){
            c[curr] = new Node(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr){
            c[curr]->next = c[curr->next];
            c[curr]->random = c[curr->random];
            curr=curr->next;
        }
        return c[head];
    }
};