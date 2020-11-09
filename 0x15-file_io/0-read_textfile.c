#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: input file (file to read and print)
 * @letters: number if letters to read and print
 * Return: number of letters read and printed or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openfile;
	char *filecontent;
	ssize_t read_content;
	ssize_t write_content;

	if (!filename)
		return (0);
	filecontent = malloc(sizeof(char) * letters);
	openfile = open(filename, O_RDONLY);
	if (openfile == -1)
	{
		free(filecontent);
		return (0);
	}
	/* Read */
	filecontent = malloc(sizeof(char) * letters);
	read_content = read(openfile, filecontent, letters);
	if (read_content == -1)
	{
		free(filecontent);
		return (0);
	}
	/* write */
	filecontent = malloc(sizeof(char) * letters);
	write_content = write(STDOUT_FILENO, filecontent, read_content);
	if (write_content == -1)
	{
		free(filecontent);
		return (0);
	}
	close(openfile);
	return (write_content);
}
