#include "monty.h"

/**
 * free_all_args - Frees all allocated memory for arguments.
 */

void free_all_args(void)
{
	close_stream();
	free_tokens();
	free_arguments();
}
