#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define R_BUF_SIZE 1024

#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD_ERR "Error: Can't read from file %s\n"
#define NOWRITE_ERR "Error: Can't write to %s\n"
#define NOCLOSE_ERR "Error: Can't close fd %d\n"
#define FILE_PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
