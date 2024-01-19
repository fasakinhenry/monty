#include "monty.h"


void pall(unsigned int line_number)
{
    stack_t *current = stack;

    (void)line_number;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
