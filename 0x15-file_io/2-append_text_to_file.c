#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file to add content at its end
 * @text_content: text to add to the file
 * Return: 1: on success, if the file exists
 * -1:on failure, if filename is NULL, if the file does not exist
 * or if there is no permission to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t openfile, write_text;
	int len;

	if (!filename)
		return (-1);
	openfile = open(filename, O_RDWR | O_APPEND);
	if (text_content)
		for (; text_content[len]; len++)
			;
	write_text = write(openfile, text_content, len);
	if (write_text == -1)
		return (-1);
	close(openfile);
	return (1);
}
