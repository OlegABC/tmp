NAME = libft.a

SRC = *.c

OBJ = $(SRC:.c = .o)

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
