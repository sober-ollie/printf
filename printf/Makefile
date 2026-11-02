
NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

LIBFT = ../libft/libft.a

SRCS = print.c \
       helper.c \
       helper2.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

libft:
	$(MAKE) -C ../libft

$(NAME): $(OBJS) libft
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c ft_printf.h ../libft/libft.h
	$(CC) $(CFLAGS) -I../libft -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ../libft fclean

re: fclean all

.PHONY: all clean fclean re
