#include "monty.h"

arg_b *arguments = NULL;

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: A pointer to an array of strings containing
 * the command line arguments
 * Description: Main file for the monty project
 * Author: Henry Fasakin
*/

int main(int argc, char **argv)
{
	(void) argv;

	validate_arguments(argc);
	init_arguments();
	get_stream(argv[1]);
	return (0);
}
