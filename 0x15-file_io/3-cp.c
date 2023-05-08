#include"main.h"
#define BUFFER_SIZE 1024
/**
 * exit_error - exits when there is an error
 * @code: exit code
 * @message: message to exit with
 * @filename: name of the file
 * @fd: file status
 */
void exit_error(int code, const char *message, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, message, filename);
	if (fd != -1)
	{
		close(fd);
	}
	exit(code);
}

/**
 * main - copies file A to file B
 * @argc: no of arguments passed
 * @argv: list of arguments that is file A and file B
 * Return: 0 for sucess
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to, buffer[BUFFER_SIZE];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_error(98, "Error: Can't read from file %s\n", file_from, -1);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		exit_error(99, "Error: Can't write to %s\n", file_to, fd_from);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			exit_error(99, "Error: Can't write to %s\n", file_to, fd_from);
	}
	if (bytes_read == -1)
		exit_error(98, "Error: Can't read from file %s\n", file_from, fd_to);
	if (close(fd_from) == -1)
		exit_error(100, "Error: Can't close fd %d\n", file_from, fd_to);
	if (close(fd_to) == -1)
		exit_error(100, "Error: Can't close fd %d\n", file_to, fd_from);
	return (0);
}

