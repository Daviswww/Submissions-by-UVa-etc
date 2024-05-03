/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *deleteMiddle(struct ListNode *head)
{
    struct ListNode **indir = &head;
    for (struct ListNode *fast = head; fast && fast->next; fast = fast->next->next)
        indir = &(*indir)->next;
    struct ListNode *del = *indir;
    *indir = (*indir)->next;
    free(del);
    return head;
}
