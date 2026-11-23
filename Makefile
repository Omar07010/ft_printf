NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS	= 	ft_printf.c print_char.c print_string.c print_digit.c\
			print_unsigned_int.c print_hexa.c print_pointer.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re