#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @ac: is the argument count integer
 * @av: is the argument vector
 *
 * Return: on  success return 1, if failed return 0
*/

int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	char buf_size[R_BUF_SIZE];
	ssize_t bytes_val;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	from_fd = open(av[1], O_RDONLY);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, NOREAD_ERR, av[1]), exit(98);
	}
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, FILE_PERM);

	if (to_fd == -1)
		dprintf(STDERR_FILENO, NOWRITE_ERR, av[2]), exit(99);
	while ((bytes_val = read(from_fd, buf_size, R_BUF_SIZE)) > 0)
	{
		if (write(to_fd, buf_size, bytes_val) != bytes_val)
			dprintf(STDERR_FILENO, NOWRITE_ERR, av[2]), exit(99);
	}
	if (bytes_val == -1)
	{
		dprintf(STDERR_FILENO, NOREAD_ERR, av[1]), exit(98);
	}
	from_fd = close(from_fd);
	to_fd = close(to_fd);

	if (from_fd)
		dprintf(STDERR_FILENO, NOCLOSE_ERR, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, NOCLOSE_ERR, from_fd), exit(100);
	return (EXIT_SUCCESS);
}
