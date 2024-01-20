#include "monty.h"

/**
 * get_stream_failed - Handles error when reading a file fails
 * @filename: The name of the file which fails to open
*/

void get_stream_failed(char *filename)
{
	dprintf(fileno(stderr), "Error: can't open file %s\n", filename);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - gets the stream for reading from the specified file
 * @filename: name of the file to set as the stream
*/

void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if(fd == -1)
	{
		get_stream_failed(filename);
	}
	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		get_stream_failed(filename);
	}
		
}
