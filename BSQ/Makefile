NAME = BSQ 

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = read_file.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
