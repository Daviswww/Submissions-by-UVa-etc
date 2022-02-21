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
        ListNode* a = new ListNode();
        ListNode* b = head;
        int k = 0, i = 0;
        while(b != NULL){
            a = b->next;
            b = a;
            k++;
        }
        if(k==1){
            return NULL;
        }else if(k==n){
            return head->next;
        }
        b = head;
        cout << k << endl;
        while(i < k-n-1){
            ++i;
            cout << head->val << endl;
            head = head->next;
        }
        if(n != 1){
            head->next = head->next->next;
        }else{
            head->next = NULL;
        }

        return b; 
    }
};