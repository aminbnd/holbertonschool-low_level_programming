#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: content to put in the created file
 * (it's a NULL terminated string)
 * Return: 1 on sucess , -1 if filename is NULL, -1
 * if filename can't be created or written
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t openfile, write_text;
	int len;

	if (filename == NULL)
		return (-1);
	openfile = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (openfile == -1)
		return (-1);
	if (text_content)
		for (; text_content[len]; len++)
			;
	write_text = write(openfile, text_content, len);
	if (write_text == -1)
		return (-1);
	close(openfile);
	return (1);
}
