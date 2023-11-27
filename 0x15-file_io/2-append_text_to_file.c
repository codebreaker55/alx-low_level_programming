#include "main.h"

/**
 * strlen_f - funtion that returns a string length
 *
 * @str: is the string that its length will be cheked
 *
 * Return: the length of the string
*/

int strlen_f(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		while (*str++)
		{
			len++;
		}
	}
	return (len);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *	If filename is NULL return -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_o;
	ssize_t size = strlen_f(text_content), bytes_num = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file_o = open(filename, O_WRONLY | O_APPEND);

	if (file_o == -1)
	{
		return (-1);
	}
	if (size)
	{
		bytes_num = write(file_o, text_content, size);
	}
	close(file_o);
	return (bytes_num != size ? -1 : 1);
}
