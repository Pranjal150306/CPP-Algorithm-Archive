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
    void deleteNode(ListNode* node) {
        ListNode* head = node->next;
        ListNode*temp = head;
        node->val = head->val;
        node->next = head->next;
        delete temp;
        
    }
};
