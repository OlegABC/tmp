NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c \
	  ft_strlen.c ft_swap.c

SRC_DIR = ./srcs/

OBJ = $(SRC:.c = .o)

FLAGS = -Wall -Wextra -Werror

HEADER = includes/libft.h

.PHONY: all clean fclean re

all: $(NAME)

%.o: $(SRC_DIR)%.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
