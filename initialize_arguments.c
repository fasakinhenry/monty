#include "monty.h"

/**
 * initialize_arguments - Initializes a pointer to
 * arg_s structure.
 */
void initialize_arguments()
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_failed();

	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_failed();

	arguments->stream = NULL;
	arguments->head = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
	arguments->stack_length = 0;
	arguments->stack = 1;
}
