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
    ListNode* middleNode(ListNode* head) {
        ListNode* a = new ListNode();
        ListNode* b = head;
        int n = 0, i = 0;
        while(b != NULL){
            a = b->next;
            b = a;
            n++;
        }
        while(i < n/2){
            ++i;
            a = head->next;
            head = a;

        }
        return head;
    }
};