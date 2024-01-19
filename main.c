#include "monty.h"

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
	return (0);
}
