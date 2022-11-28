SRCS	=	ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_atoi.c ft_strlen.c ft_strjoin.c ft_putstr_fd.c ft_putnbr_fd.c \
			ft_memcpy.c ft_putchar_fd.c ft_memcmp.c ft_putendl_fd.c \
			ft_strncmp.c ft_memmove.c ft_memchr.c ft_strchr.c ft_memset.c \
			ft_bzero.c ft_strrchr.c ft_calloc.c ft_substr.c ft_toupper.c \
			ft_tolower.c ft_lstnew.c ft_lstadd_front.c ft_strdup.c \
			ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_itoa.c ft_split.c


HEADER	=	libft.h

OBJS	=	$(SRCS:.c=.o)

NAME	=	libft.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -g3

DEBUG	=	-fsanitize=address

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc  $@ $^
			ranlib $@

%.o		:	%.c $(HEADER)
			$(CC) $(CFLAGS) $(DEBUG) -o $@ -c $<

main	:	all
			$(CC) $(CFLAGS) $(DEBUG) main.c libft.a -o tester

test	:
			bash ~/workflow/cerle1/libft-war-machine/grademe.sh $(basename $(SRCS))

clean	:
			/bin/rm -rf $(OBJS)

fclean	:	clean
			/bin/rm -rf $(NAME)

re		:	fclean all

