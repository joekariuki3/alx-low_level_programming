# 0x1C. C - Makefiles

Automate builds with Make.

## Learning Objectives
- Write simple and pattern rules
- Use variables and phony targets
- Track dependencies to avoid unnecessary recompilation

## Example
```
CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic
SRC=main.c util.c
OBJ=$(SRC:.c=.o)
NAME=prog

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
```
