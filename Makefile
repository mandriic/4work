NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = 	./ft_printf.c \
		./ft_num_to_base.c\
		./ft_putchar.c\
		./ft_print_string.c\
		./ft_parsing.c\
		./ft_pointer.c\
		./ft_dec_ent.c\
		./ft_itoa.c\
		./ft_unsign.c\
		./ft_strlen.c\
		./ft_hex_low.c\
		./ft_hex_high.c

OBJ = $(SRC:%.c=%.o)
all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar rcs $(NAME) $(OBJ)
$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
clean:
	rm -f $(OBJ) $(BOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all