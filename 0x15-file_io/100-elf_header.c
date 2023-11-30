#include "main.h"
#include <elf.h>

void more_os_abi_print(Elf64_Ehdr h);

/**
 * magic_print - function to print the bytes of ELF magic
 *
 * @h: is the struct for header ELF
 *
 * Return: nothing
*/

void magic_print(Elf64_Ehdr h)
{
	int n = 0;

	printf("  Magic:   ");

	while (n < EI_NIDENT)
	{
		printf("%2.2x%s", h.e_ident[n], n != EI_NIDENT - 1 ? " " : "\n");
		n++;
	}
}

/**
 * class_print - function used to print the ELF class
 *
 * @h: is the struct for header ELF
 *
 * Return: nothing
*/

void class_print(Elf64_Ehdr h)
{
	printf("  Class:                             ");

	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			{
				printf("none");
			}
		break;
		case ELFCLASS32:
			{
				printf("ELF32");
			}
		break;
		case ELFCLASS64:
			{
				printf("ELF64");
			}
		break;
	}
	printf("\n");
}

/**
 * data_print - function used to print the ELF data
 *
 * @h: is the struct for header ELF
 *
 * Return: nothing
*/

void data_print(Elf64_Ehdr h)
{
	printf("  Data:                              ");

	switch (h.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			{
				printf("none");
			}
		break;
		case ELFDATA2LSB:
			{
				printf("2's complement, little endian");
			}
		break;
		case ELFDATA2MSB:
			{
				printf("2's complement, big endian");
			}
		break;
	}
	printf("\n");
}

/**
 * version_print - function used to print the ELF version
 *
 * @h: is the struct for header ELF
 *
 * Return: nothing
*/

void version_print(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);

	switch (h.e_ident[EI_VERSION])
	{
		case EV_NONE:
			{
				printf("%s", "");
			}
		break;
		case EV_CURRENT:
			{
				printf(" (current)");
			}
		break;
	}
	printf("\n");
}

/**
 * os_abi_print - function used to print the ELF osabi
 *
 * @h: is the struct for header ELF
 *
 * Return: nothing
*/

void os_abi_print(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");

	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Sun Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		default:
			more_os_abi_print(h);
			break;
	}
	printf("\n");
}

/**
 * more_os_abi_print - function that prints more ELF osabi
 *
 * @h: is a struct for the ELF header
 *
 * Return: nothing
*/

void more_os_abi_print(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_TRU64:
		{
			printf("UNIX - TRU64");
			break;
		}
		case ELFOSABI_MODESTO:
		{
			printf("Novell - Modesto");
			break;
		}
		case ELFOSABI_ARM:
		{
			printf("ARM");
			break;
		}
		case ELFOSABI_OPENBSD:
		{
			printf("UNIX - Open BSD");
			break;
		}
		case ELFOSABI_STANDALONE:
		{
			printf("Standalone App");
			break;
		}
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * abi_version_print - function used to print ELF ABI Version
 *
 * @h: is a struct for the ELF header
 *
 * Return: nothing
*/

void abi_version_print(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
			h.e_ident[EI_ABIVERSION]);
}

/**
 * type_print - function used to print ELF type
 *
 * @h: is a struct for the ELF header
 *
 * Return: nothing
*/

void type_print(Elf64_Ehdr h)
{
	char *ptr = (char *)&h.e_type;
	int n = 0;

	printf("  Type:                              ");

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		n = 1;
	}
	switch (ptr[n])
	{
		case ET_NONE:
			printf("NONE (No file type)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", ptr[n]);
		break;
	}
	printf("\n");
}

/**
 * entry_point_print - function that prints ELF Entry point address
 *
 * @h: is a struct for the ELF header
 *
 * Return: nothing
*/

void entry_point_print(Elf64_Ehdr h)
{
	int n = 0, size = 0;
	unsigned char *ptr = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");

	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		n = h.e_ident[EI_CLASS] != ELFCLASS64 ? 3 : 7;
		while (!ptr[n])
		{
			n--;
		}
		printf("%x", ptr[n--]);

		while (n >= 0)
		{
			printf("%02x", ptr[n]);
			n--;
		}
		printf("\n");
	}
	else
	{
		n = 0;
		size = h.e_ident[EI_CLASS] != ELFCLASS64 ? 3 : 7;

		while (!ptr[n])
		{
			n++;
		}
		printf("%x", ptr[n++]);
		while (n <= size)
		{
			printf("%02x", ptr[n]);
			n++;
		}
		printf("\n");
	}
}

/**
 * main - program that displays the information contained
 *	in the ELF header at the start of an ELF file
 *
 * @ac: is the argument count integer
 * @av: is the argument vector
 *
 * Return: 1 for success, and 0 for failure
*/

int main(int ac, char **av)
{
	int file_d;
	ssize_t bytes_num;
	Elf64_Ehdr h;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	}
	file_d = open(av[1], O_RDONLY);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	}
	bytes_num = read(file_d, &h, sizeof(h));

	if (bytes_num != sizeof(h) || bytes_num < 1)
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L'
			&& h.e_ident[3] == 'F')
	{
		printf("ELF HEADER:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	magic_print(h);
	class_print(h);
	data_print(h);
	version_print(h);
	os_abi_print(h);
	abi_version_print(h);
	type_print(h);
	entry_point_print(h);

	if (close(file_d))
		dprintf(STDERR_FILENO, "Can't close file descriptor: %d\n", file_d)
			, exit(98);
	return (EXIT_SUCCESS);
}
