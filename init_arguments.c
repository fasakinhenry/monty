#include "monty.h"

/**
 * init_arguments - Initializes a pointer to arg_a structure
 * Author: Henry Fasakin
*/

void init_arguments()
{
	arguments = malloc(sizeof(arg_b));
	if(arguments == NULL)
		malloc_failure();
	arguments->stream = NULL;
	arguments->line = NULL;
}
