#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Structures */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

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

extern arg_b *arguments;

void validate_arguments(int argc);
void malloc_failure(void);
void init_arguments();
void get_stream(char *filename);
#endif /* MONTY_H*/
