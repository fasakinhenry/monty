#include "monty.h"

/**
* is_comment - checks the tokens if it starts with #"
* Return: 0 or 1
*/
int is_comment(void)
{
	if (
		arguments->tokens &&
		arguments->tokens[0] &&
		arguments->tokens[0][0] == '#'
	)
		return (1);

	return (0);
}
