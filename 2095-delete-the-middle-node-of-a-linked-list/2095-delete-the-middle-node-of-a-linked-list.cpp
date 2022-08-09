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
        if(!head -> next) return NULL;
        ListNode* s = head;
        ListNode* f = head;
        while(f && f -> next){
            s = s -> next;
            f = f -> next -> next;
        }
        if(s -> next == NULL){
            head -> next = NULL;
        }
        else{
            s -> val = s -> next -> val;
            s -> next = s -> next -> next;
        }
        return head;
    }
};