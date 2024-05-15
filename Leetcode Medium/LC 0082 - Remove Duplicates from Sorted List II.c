/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *deleteDuplicates(struct ListNode *head)
{
    struct ListNode **indir = &head;

    while (*indir != NULL && (*indir)->next != NULL)
    {
        if ((*indir)->val == (*indir)->next->val)
        {
            int duplicateVal = (*indir)->val;
            while (*indir != NULL && (*indir)->val == duplicateVal)
            {
                struct ListNode *temp = *indir;
                *indir = (*indir)->next;
                free(temp);
            }
        }
        else
        {
            indir = &(*indir)->next;
        }
    }
    return head;
}