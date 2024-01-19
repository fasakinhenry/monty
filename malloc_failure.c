#include "monty.h"

/**
 * malloc_failure - Handle malloc memory allocation failures
 * Author: Henry Fasakin
*/

void malloc_failure(void)
{
	write(2, "Error: malloc failed", 21);
	free_arguments();
	exit(EXIT_FAILURE);
}
