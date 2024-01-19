#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer value stored in the node
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* Global variable representing the stack */
extern stack_t *stack;

/* Function prototypes */
void push(int value);
void pall(unsigned int line_number);
char *custom_getline(FILE *file);

#endif /* MONTY_H */
