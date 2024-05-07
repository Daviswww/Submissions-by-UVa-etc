/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head)
{
    struct ListNode *fast = head;

    while (head && fast && fast->next)
    {
        head = head->next;
        fast = fast->next->next;

        if (head == fast)
        {
            return true;
        }
    }

    return false;
}