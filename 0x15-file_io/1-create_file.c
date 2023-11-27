#include "main.h"

/**
 * strlen_f - a function that returns the length of a string
 *
 * @str: is a string that its length will be checked
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
 * create_file - function that creates a file
 *
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int file_o;
	ssize_t size = strlen_f(text_content), bytes_num = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file_o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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
