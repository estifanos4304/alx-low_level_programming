#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a list
 * @head: A pointer to listint_t structure
 * Return: The address of the node where the loop start, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	if (head == NULL || head->next == NULL)
		return (NULL);

	one = head->next;
	two = (head->next)->next;

	while (two)
	{
		if (one == two)
		{
			one = head;

			while (one != two)
			{
				one = one->next;
				two = two->next;
			}

			return (one);
		}

		one = one->next;
		two = (two->next)->next;
	}

	return (NULL);
}
}
