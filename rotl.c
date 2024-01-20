#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: Pointer to the stack.
 * @line_number: Line number where the mul function is called.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	(void) line_number;
	if (arguments->stack_length < 2)
		return;

	tmp1 = arguments->head;
	tmp2 = tmp1->next;
	arguments->head = tmp2;
	while (tmp2)
	{
		if (tmp2->next == NULL)
		{
			tmp2->next = tmp1;
			tmp1->next = NULL;
			tmp1->prev = tmp2;
			break;
		}

		tmp2 = tmp2->next;
	}
}
