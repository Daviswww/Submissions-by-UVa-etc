/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *deleteMiddle(struct ListNode *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        return NULL;
    }
    struct ListNode *copy_head = head;
    int n = count_nodes(head);
    int mid = n / 2;
    int i = 0;
    while (++i < mid)
    {
        head = head->next;
    }
    head->next = head->next->next;
    return copy_head;
}

int count_nodes(struct ListNode *list)
{
    int lenght = 0;
    while (list != NULL)
    {
        list = list->next;
        ++lenght;
    }
    return lenght;
}