#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
