#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Structures */
/**
 * struct arg_a - This stores variables
 * @stream: File which connects to streams from file
 * @line: String consisting of line of text read from stream
 * Description: stores variables that ould be used
 * It would also have memory allocation and freeing
*/
typedef struct arg_a
{
	FILE *stream;
	char *line;
} arg_b;

extern arg_b argumments;

void validate_arguments(int argc);
#endif /* MONTY_H*/
