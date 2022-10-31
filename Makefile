SRCS	=	ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_atoi.c ft_strlen.c ft_strjoin.c ft_putstr_fd.c ft_putnbr_fd.c \
			ft_memcpy.c ft_putchar_fd.c ft_memcmp.c ft_putendl_fd.c \
			ft_strncmp.c ft_memmove.c


HEADER	=	libft.h

OBJS	=	$(SRCS:.c=.o)

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -g3

DEBUG	=	 -fsanitize=address

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc  $@ $^
			ranlib $@

%.o		:	%.c $(HEADER)
			$(CC) $(CFLAGS) $(DEBUG) -o $@ -c $<

main	:	all
			$(CC) $(CFLAGS) $(DEBUG) main.c libft.a -o tester

test	:
			@bash ~/workflow/libft-war-machine/grademe.sh $(basename $(SRCS))

clean	:
			/bin/rm -rf $(OBJS)

fclean	:	clean
			/bin/rm -rf $(NAME)

re		:	fclean all

