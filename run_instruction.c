#include "monty.h"

/**
 * run_instruction - Runs the instruction specified by the arguments.
 */

void run_instruction(void)
{
	stack_t *stack = NULL;

	if (arguments->n_tokens == 0)
		return;

	arguments->instruction->f(&stack, arguments->line_number);
}
