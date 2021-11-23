NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = 	ft_printf.c \
		ft_num_to_hex.c\
		ft_putchar.c\
		ft_prstring.c\

OBJ = $(SRC:%.c=%.o)
all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar rcs $(NAME) $(OBJ)
$(OBJ): $(SRC)
	$(CC)  -c $(SRC)
clean:
	rm -f $(OBJ) $(BOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all