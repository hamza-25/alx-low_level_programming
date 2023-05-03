#include "lists.h"
#include <stdio.h>
/**
 * detect_loop - func to detect loop
 * @head: the head of the list
 * Return:  if loop or not
*/
listint_t *detect_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

    slow = slow->next;
    fast = fast->next->next;
    while (fast && fast->next)
    {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow != fast)
        slow = NULL;
    return (slow);
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return (slow);
}
/**
 * find_listint_loop - func to find start loop
 * @head: the head of the list
 * Return:  pointer start loop
*/
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *p = head;

    p = detect_loop(p);
    return (p);
}
