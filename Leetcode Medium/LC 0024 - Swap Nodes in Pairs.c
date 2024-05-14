/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *swapPairs(struct ListNode *node)
{
    if (node == NULL || node->next == NULL)
        return node;

    struct ListNode *temp = swapPairs(node->next->next);

    struct ListNode *head = node->next;

    node->next->next = node;
    node->next = temp;

    return head;
}