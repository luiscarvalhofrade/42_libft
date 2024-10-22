#compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra -I .

# Source files
SRCS = $(wildcard ./*.c)

# Object files
OBJECTS = $(SRCS:.c=.o)

# Library name
NAME = libft.a

# Rules
all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Library cleaned."

re: fclean all

.PHONY: all clean fclean re