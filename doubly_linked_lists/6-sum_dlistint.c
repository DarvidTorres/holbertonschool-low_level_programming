#include "lists.h"
/**
* sum_dlistint - function that returns the sum of all the data (n)
* @head: dlistint_t
* Return: eturns the sum of all the data (n)
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
