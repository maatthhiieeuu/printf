
SRCS = ft_atoi.c ft_isdigit.c ft_strlcpy.c ft_strlen.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putnbr_fd.c ft_strnchr.c ft_putnstr_fd.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c -I./
RM = rm -f
AR = ar rcs
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	${AR} $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
