#include "main.h"

/**
 * read_textfile - function that reads a text file
 *	and prints it to the POSIX standard output
 *
 * @filename: is the nname of the file that will be readed
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 *	if the file can not be opened or read or filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_o;
	ssize_t bytes_num;
	char buf_size[R_BUF_SIZE * 8];

	if (!letters || filename == NULL)
	{
		return (0);
	}
	file_o = open(filename, O_RDONLY);

	if (file_o == -1)
	{
		return (0);
	}
	bytes_num = read(file_o, &buf_size[0], letters);
	bytes_num = write(STDOUT_FILENO, &buf_size[0], bytes_num);
	close(file_o);
	return (bytes_num);
}
