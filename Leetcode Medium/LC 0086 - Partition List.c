/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *partition(struct ListNode *head, int x)
{
    struct ListNode *l2 = NULL;
    struct ListNode **p1 = &head, **p2 = &l2;

    for (struct ListNode *node = head; node; node = node->next)
    {
        struct ListNode ***indir = node->val < x ? (&p1) : (&p2);
        **indir = node;
        *indir = &(**indir)->next;
    }

    *p1 = l2;
    *p2 = NULL;
    return head;
}