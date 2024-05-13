/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *removeNodes(struct ListNode *head)
{
    if (head == NULL)
        return head;
    head->next = removeNodes(head->next);
    if (head->next == NULL)
        return head;
    if (head->next->val > head->val)
        return head->next;
    return head;
}