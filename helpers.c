#include "monty.h"

/**
 * validate_arguments - Chcek num of command line arguments
 * @argc: The number of arguments passed
 * Author: henry Fasakin
*/

void validate_arguments(int argc)
{
	if (argc == 2)
		return;
	write(2, "USAGE: monty file\n", 19);
	exit(EXIT_FAILURE);
}
