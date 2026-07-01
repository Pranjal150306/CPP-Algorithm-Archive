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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return nullptr;
        while(head != nullptr && head->val == val) { 
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* temp = head;
        ListNode* previous = nullptr;
        while(temp!=nullptr) {
            if(temp->val == val) {
                previous->next = previous->next->next;
                delete temp;
                temp = previous->next; 
                continue;
            }
            previous = temp;
            temp = temp->next;
        }
        return head;
        
    }
};
