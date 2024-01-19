#include "monty.h"

#define MAX_LINE_SIZE 1024

char *custom_getline(FILE *file)
{
    char *line = NULL;
    size_t len = 0;
    size_t size = 0;
    int c;

    /* Allocate initial buffer */
    line = (char *)malloc(sizeof(char) * MAX_LINE_SIZE);
    if (line == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    /* Read characters until newline or end of file */
    while ((c = fgetc(file)) != EOF && c != '\n')
    {
        /* Resize the buffer if needed */
        if (len == size)
        {
            char *temp = realloc(line, size);
            size += MAX_LINE_SIZE;
            if (temp == NULL)
            {
                fprintf(stderr, "Error: Memory reallocation failed\n");
                free(line);
                exit(EXIT_FAILURE);
            }
            line = temp;
        }

        line[len++] = (char)c;
    }

    /* Null-terminate the string */
    line[len] = '\0';

    /* Return NULL if the line is empty and at the end of the file */
    if (len == 0 && c == EOF)
    {
        free(line);
        return NULL;
    }

    return line;
}
