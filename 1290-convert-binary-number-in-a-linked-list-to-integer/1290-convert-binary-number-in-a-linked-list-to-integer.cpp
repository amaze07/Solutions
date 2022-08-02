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
    int getDecimalValue(ListNode* head) {
        int len = -1;
        ListNode* temp = head;
        while(temp){
            temp = temp -> next;
            len++;
        }
        long long dec = 0;
        while(len >= 0){
            dec += (head->val)*pow(2, len);
            len--;
            head = head->next;
        }
        return dec;
    }
};